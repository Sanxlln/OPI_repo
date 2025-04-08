#include <iostream>
#include <random>
#include <numeric> 
#include <algorithm>

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

     double average = std::accumulate(numbers.begin(), numbers.end(), 0.0) / numbers.size();
    int maxValue = *std::max_element(numbers.begin(), numbers.end());

    std::cout << "Середнє: " << average << std::endl;
    std::cout << "Максимальне: " << maxValue << std::endl;
    return 0;
}
