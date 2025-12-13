#include "Ticket.h"

Ticket::Ticket(int number, const std::string& destination)
    : number(number), destination(destination) {
}

bool Ticket::operator==(const Ticket& other) const {
    return number == other.number;
}

std::ostream& operator<<(std::ostream& os, const Ticket& ticket) {
    os << "Ticket #" << ticket.number
        << ", Destination: " << ticket.destination;
    return os;
}