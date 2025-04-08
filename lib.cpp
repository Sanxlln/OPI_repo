#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, int> people;
    people["Оля"] = 22;
    people["Іван"] = 30;
    people["Андрій"] = 27;

    for (const auto& pair : people) {
        std::cout << pair.first << " — " << pair.second << " років" << std::endl;
    }

    std::string name = "Іван";
    if (people.count(name)) {
        std::cout << name << " знайдено, вік: " << people[name] << std::endl;
    } else {
        std::cout << name << " не знайдено" << std::endl;
    }

    return 0;
}
