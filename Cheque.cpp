#include <iostream>

bool isPrime(int number) {
    if (number <= 1) {
        return false; // 0 and 1 are not prime
    }

    for (int i = 2; i*i <= number; i++) {
        if (number % i == 0) {
            return false; // Number is divisible by i, not prime
        }
    }

    return true; // Number is prime
}

int main() {
    int x;

    std::cout << "Please enter a number to check whether it is a prime number or not: ";
    std::cin >> x;

    if (isPrime(x)) {
        std::cout << x << " is a prime number." << std::endl;
    } else {
        std::cout << x << " is not a prime number." << std::endl;
    }

    return 0;
}
