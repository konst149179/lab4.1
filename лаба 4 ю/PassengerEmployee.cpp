#include "PassengerEmployee.h"
#include <iostream>

PassengerEmployee::PassengerEmployee(
    const std::string& name,
    int ticketNumber,
    const std::string& position
)
    : Person(name),        
    Passenger(name, ticketNumber),
    Employee(name, position) {
}

void PassengerEmployee::printInfo() const {
    std::cout << "Passenger-Employee: " << name
        << ", Ticket: " << ticketNumber
        << ", Position: " << position << std::endl;
}