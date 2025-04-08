#include <iostream>
#include <random>

int getRandomNumber(int min, int max) {
    std::random_device rd;
    std::mt19937 gen(rd()); 
    std::uniform_int_distribution<> distrib(min, max);
    
    return distrib(gen);
}

int main() {
    for (int i = 0; i < 5; i++) {
        std::cout << getRandomNumber(1, 100) << " ";
    }
    std::cout << std::endl;
    return 0;
}
