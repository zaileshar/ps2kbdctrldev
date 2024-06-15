#include <iostream>

class Hal_spi {
public:
    void printStatus() {
        std::cout << "Hal_spi initialized." << std::endl;
    }
};
// Fixed identified race condition
