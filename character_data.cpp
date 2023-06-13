#include <iostream>
#include <string>
#include <cmath>

class Operator {
public:
    std::string name ;
    std::string birthdate ;
    std::string experience ;

    Operator(std::string  x, std::string  y, std::string  z) {
    name = x ;
    birthdate = y ;
    experience = z ;

    } ;

} ;

main() {

    Operator number1("Franka", "19 September", "3 years") ;
    Operator number2("Liskarm", "4 November", "3 years") ;

    std::cout << "number1: " << number1.name << "\, " << number1.birthdate << "\, " << number1.experience << std::endl ;
    std::cout << "number2: " << number2.name << "\, " << number2.birthdate << "\, " << number2.experience << std::endl ;

    return 0;
}
