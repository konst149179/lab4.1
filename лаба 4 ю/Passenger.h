#pragma once
#include "Person.h"

class Passenger : virtual public Person {
protected:
    int ticketNumber;

    void validateTicket(int ticketNumber) const;

public:
    Passenger(const std::string& name, int ticketNumber);
    void printInfo() const override;
};