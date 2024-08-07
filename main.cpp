#include "ParkedVehicle.h"

int main() {
    greetUser();

    char choice;
    do {
        std::cout << "Do you want to park a vehicle? (y/n): ";
        std::cin >> choice;

        if (choice == 'y' || choice == 'Y') {
            addVehicle();
        }

    } while (choice == 'y' || choice == 'Y');

    std::cout << "Displaying parked vehicles:\n";
    displayVehicles();

    return 0;
}
