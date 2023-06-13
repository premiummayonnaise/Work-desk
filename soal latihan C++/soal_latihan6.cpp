#include <iostream>

int main() {

    int number ;
    int sum ;

    std::cout << "This program sums all the number between 1 and the number in the input." << std::endl
              << "-----------------------------------------------------------------------" << std::endl
              << "Insert a random positive integer." << std::endl << std:: endl ;

    std::cin >> number ;

    for(int i = 1; i <= number; i++) {
        while(i % 2 == 0) {
            sum += i;
        }

    }

    std::cout << "The calculation result is " << sum << std::endl ;

    return 0;
}