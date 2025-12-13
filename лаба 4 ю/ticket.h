#pragma once
#include <string>
#include <iostream>

class Ticket {
    int number;
    std::string destination;

public:
    Ticket(int number = 0, const std::string& destination = "");

    bool operator==(const Ticket& other) const;
    friend std::ostream& operator<<(std::ostream& os, const Ticket& ticket);
};
