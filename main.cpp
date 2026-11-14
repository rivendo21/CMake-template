#include <iostream>
#include <print>
#include <string>

int main() {

    // Print data the old way
    std::cout << "Hello, C++ from the old cout!\n";
    std::cout << "This is the old way to print output.\n";

    // Print data the modern way
    std::println("Hello, C++! this project is just used as a placeholder for the cmakelist template");
    std::println("This is the modern way to print output with print ln.");

    // Get some data
    std::string name{"FullName"};
    int age{25};

    //Printing the data
    std::cout << name << " is " << age << " years old.\n";
    std::println("{} is {} years old.", name, age);

    return 0;
}
