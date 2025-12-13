#pragma once
#include <string>

class Person {
protected:
    std::string name;

public:
    Person(const std::string& name = "IVAN IVANYCH");
    virtual void printInfo() const;
    virtual ~Person() = default;
};