#include "ParkedVehicle.h"

/// Initialize the array of parked cars
ParkedVehicle parked[15];
int PARKING_SPACES = 15;

/// Function definitions from the first part

/// Setters
void ParkedVehicle::setCustomerName() {
    std::string newName;
    std::cout << "Hello there, what is your name: ";
    std::cin.ignore(); // Ignore any newline character left in the buffer
    std::getline(std::cin, newName);
    customerName = newName;
}

void ParkedVehicle::setVehicleRegNumber() {
    std::string newReg;
    std::cout << "Hello " << getCustomerName() << ", what is the registration of your vehicle: ";
    std::getline(std::cin, newReg);
    vehicleRegNumber = newReg;
}

void ParkedVehicle::setParkingTime() {
    float newTime;
    std::cout << "For how many hours are you going to park your car: ";
    std::cin >> newTime;
    parkedTime = newTime;
}

/// Getters
std::string ParkedVehicle::getCustomerName() const {
    return customerName;
}

std::string ParkedVehicle::getVehicleRegNumber() const {
    return vehicleRegNumber;
}

float ParkedVehicle::getParkingTime() const {
    return parkedTime;
}

/// Other function definitions
void greetUser() {
    std::cout << "Welcome To Proxima Parking\n";
}

void addVehicle() {
    static int currentIndex = 0;

    if (currentIndex >= PARKING_SPACES) {
        std::cout << "Parking lot is full.\n";
        return;
    }

    ParkedVehicle newVehicle;
    newVehicle.setCustomerName();
    newVehicle.setVehicleRegNumber();
    newVehicle.setParkingTime();

    parked[currentIndex] = newVehicle;
    currentIndex++;
}

void displayVehicles() {
    for (int i = 0; i < PARKING_SPACES; i++) {
        if (parked[i].getCustomerName() != "") {
            std::cout << "Vehicle " << i + 1 << ":\n";
            std::cout << "Customer Name: " << parked[i].getCustomerName() << "\n";
            std::cout << "Vehicle Registration Number: " << parked[i].getVehicleRegNumber() << "\n";
            std::cout << "Parked Time: " << parked[i].getParkingTime() << " hours\n";
            std::cout << "-------------------------\n";
        }
    }
}
