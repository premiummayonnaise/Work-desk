#include <iostream>
 
 int main() {

    int number;
    int number2 = 1;

    std::cout << "Welcome to factorials calculator!" << std::endl
              << "---------------------------------" << std::endl
              << "Please insert a number to see the value of its factorials." << std::endl ;

    std::cin >> number;

    while(number >= 1) {

        number2 *= number;
        number -= 1;
    }

    std::cout << "The factorial of " << number << " is " << number2 ;

 }