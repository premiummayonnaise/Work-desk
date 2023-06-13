#include <iostream>

int main() {
    int x;
    int factorial = 1;

    std::cout << "Enter a number to calculate its factorial: ";
    std::cin >> x;

    if (x < 0) {
        std::cout << "Factorial is not defined for negative numbers." << std::endl;
    } else {
        for (int i = 1; i <= x; ++i) {
            factorial *= i;
        }

        std::cout << "The factorial of " << x << " is: " << factorial << std::endl;
    }

    return 0;
}
