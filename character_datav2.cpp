#include <iostream>
#include <string>

class Operator {
public:
    std::string operator_name;
    std::string operator_birthdate;
    std::string operator_experience;

    // Constructor
    Operator(std::string name, std::string birthdate, std::string experience) {
        operator_name = name;
        operator_birthdate = birthdate;
        operator_experience = experience;
    }
};

int main() {
    Operator number1("Franka", "19 September", "3 years");
    Operator number2("Liskarm", "4 November", "3 years");

    std::cout << "Operator 1: " << number1.operator_name << ", " << number1.operator_birthdate << ", " << number1.operator_experience << std::endl;
    std::cout << "Operator 2: " << number2.operator_name << ", " << number2.operator_birthdate << ", " << number2.operator_experience << std::endl;

    return 0;
}
