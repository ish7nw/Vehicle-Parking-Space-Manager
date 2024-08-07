#ifndef PARKEDVEHICLE_H
#define PARKEDVEHICLE_H

/// Libraries
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

/// Declaring the class here
class ParkedVehicle {
private:
    std::string customerName;
    std::string vehicleRegNumber;
    float parkedTime;

public:
    /// Setters
    void setCustomerName();
    void setVehicleRegNumber();
    void setParkingTime();

    /// Getters
    std::string getCustomerName() const;
    std::string getVehicleRegNumber() const;
    float getParkingTime() const;
};

/// Array of parked cars
extern ParkedVehicle parked[15];

/// Global variables
extern int PARKING_SPACES;

/// Other function prototyping
void greetUser();
void addVehicle();
void displayVehicles();

#endif //PARKEDVEHICLE_H
