#include <iostream>  
#include <random>    

// Створення генератора випадкових чисел
std::random_device rd;   
std::mt19937 gen(rd());  

// Функція для генерації випадкових цілих чисел в заданому діапазоні
int getRandomNumber(int min, int max) {
    std::uniform_int_distribution<> distrib(min, max);  
    return distrib(gen);  
}

// Функція для генерації випадкових чисел з плаваючою точкою в заданому діапазоні
double getRandomDouble(double min, double max) {
    std::uniform_real_distribution<> distrib(min, max); 
    return distrib(gen);  
}

int main() {
    int count = 5;  // Кількість випадкових чисел для генерації

    // Виведення випадкових цілих чисел
    std::cout << "Випадкові числа (цілі): ";
    for (int i = 0; i < count; i++) {
        std::cout << getRandomNumber(1, 100) << " "; 
    }

    // Виведення випадкових чисел з плаваючою точкою
    std::cout << "\nВипадкові числа (з плаваючою точкою): ";
    for (int i = 0; i < count; i++) {
        std::cout << getRandomDouble(1.0, 100.0) << " ";  
    }
    
    std::cout << std::endl;  
    return 0;  
}
