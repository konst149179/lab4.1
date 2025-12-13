#pragma once
#include "Passenger.h"
#include "Employee.h"

class PassengerEmployee : public Passenger, public Employee {
public:
    PassengerEmployee(
        const std::string& name,
        int ticketNumber,
        const std::string& position
    );

    void printInfo() const override;
};
