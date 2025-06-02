#include <iostream>

// Main function that asks for a name and prints greeting
int main() {
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Hello world from @" << name << std::endl;
}
