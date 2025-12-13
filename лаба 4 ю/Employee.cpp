#include "Employee.h"
#include <iostream>

Employee::Employee(const std::string& name, const std::string& position)
    : Person(name), position(position) {
}

void Employee::printInfo() const {
    std::cout << "Employee: " << name
        << ", Position: " << position << std::endl;
}