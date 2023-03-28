#include <iostream>

int main() {
    //cool hello world program!
    char name[64];
    std::cout << "What is your name:\n";
    std::cin >> name;
    std::cout << "Hello " << name << "! How are you?\n";
}