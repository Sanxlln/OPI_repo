#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, int> people;
    people["Оля"] = 22;
    people["Іван"] = 30;
    people["Андрій"] = 27;

    std::cout << "Список людей:" << std::endl;
    for (const auto& pair : people) {
        std::cout << pair.first << " — " << pair.second << " років" << std::endl;
    }

    std::string name;
    std::cout << "\nВведіть ім'я для пошуку: ";
    std::getline(std::cin, name);

    if (people.count(name)) {
        std::cout << name << " знайдено, вік: " << people[name] << std::endl;
    } else {
        std::cout << name << " не знайдено" << std::endl;
    }

    return 0;
}
