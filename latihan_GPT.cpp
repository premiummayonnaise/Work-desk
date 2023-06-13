#include <iostream>

void problemOne() {

    int x, y;

    std::cout << "Enter two numbers." << std::endl ;
    std::cin >> x ;
    std::cin.ignore() ;
    std::cin >> y ;
    std::cout << "The result is: " << x + y << std::endl ;

}

int problemTwo() {

    int x;

    std::cout << "Please enter a number to check whether a number is a prime number or not." << std:: endl ;
    std::cin >> x ;

    if (x % 2 == 0) {

    std::cout << "Is not a prime number.";

    } else { std::cout << "Is a prime number.";

    }

    return 0;
}


void problemThree() {

    int myNum [10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::cout << max(myNum) << std::endl ;

}
