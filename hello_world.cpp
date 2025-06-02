#include <iostream>

// Главная фукнция,запрашивающая имя и печатающая приветствие.
int main() {
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Hello world from @" << name << std::endl;
}
