#include "Passenger.h"
#include <iostream>

Passenger::Passenger(const std::string& name, int ticketNumber)
    : Person(name)
{
    if (ticketNumber < 10000 || ticketNumber > 99999) {
        std::cout << "Invalid ticket number. Setting default: 10000\n";
        this->ticketNumber = 10000;
    }
    else {
        this->ticketNumber = ticketNumber;
    }
}

void Passenger::printInfo() const {
    std::cout << "Passenger: " << name
        << ", Ticket: " << ticketNumber << std::endl;
}