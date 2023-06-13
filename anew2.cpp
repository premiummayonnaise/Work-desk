#include <iostream>

int main() {
    int number;
    int sum;

    std::cout << "This program sums all the numbers between 1 and the input number." << std::endl
              << "----------------------------------------------------------------" << std::endl
              << "Enter a positive integer: " << std::endl;

    std::cin >> number;

    for (int i = 1; i <= number; i++) {
        if (i % 2 == 0) {  // Check if the number is even
            sum += i;      // Add the even number to the sum
        }
    }

    std::cout << "The sum of all even numbers between 1 and " << number << " is: " << sum << std::endl;

    return 0;
}
