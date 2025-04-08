#include <iostream> 
#include <map>      
#include <string>    

int main() {
    // Створення мапи, де ключ — це рядок (ім'я), а значення — ціле число (вік)
    std::map<std::string, int> people;

    // Додавання елементів до мапи
    people["Оля"] = 22;    
    people["Іван"] = 30;   
    people["Андрій"] = 27;  

    // Перебір елементів мапи та виведення імен і віку
    for (const auto& pair : people) {
        std::cout << pair.first << " — " << pair.second << " років" << std::endl;
    }

    // Шукаємо певну особу за ім'ям
    std::string name = "Іван";  

    // Перевірка, чи є ім'я в мапі
    if (people.count(name)) {
        // Якщо ім'я знайдено, виводимо вік
        std::cout << name << " знайдено, вік: " << people[name] << std::endl;
    } else {
        // Якщо ім'я не знайдено, виводимо повідомлення
        std::cout << name << " не знайдено" << std::endl;
    }

    return 0;  // Завершення програми
}
