#include <iostream>
#include "PassengerEmployee.h"

int main() {
    try {
        PassengerEmployee conductor(
            "Kostya Kokhaney",
            100,                 
            "Conductor"
        );

        conductor.printInfo();
    }
    catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    return 0;
}