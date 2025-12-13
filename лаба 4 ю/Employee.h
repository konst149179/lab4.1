#pragma once
#include "Person.h"

class Employee : virtual public Person {
protected:
    std::string position;

public:
    Employee(const std::string& name, const std::string& position);
    void printInfo() const override;
};
