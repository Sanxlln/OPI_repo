#include <iostream>
#include <random>

std::random_device rd;
std::mt19937 gen(rd());

int getRandomNumber(int min, int max) {
    std::uniform_int_distribution<> distrib(min, max);
    return distrib(gen);
}

double getRandomDouble(double min, double max) {
    std::uniform_real_distribution<> distrib(min, max);
    return distrib(gen);
}

int main() {
    int count = 5;  
    std::cout << "Випадкові числа (цілі): ";
    for (int i = 0; i < count; i++) {
        std::cout << getRandomNumber(1, 100) << " ";
    }

    std::cout << "\nВипадкові числа (з плаваючою точкою): ";
    for (int i = 0; i < count; i++) {
        std::cout << getRandomDouble(1.0, 100.0) << " ";
    }
    
    std::cout << std::endl;
    return 0;
}
