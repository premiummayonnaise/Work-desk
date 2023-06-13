#include <iostream>

int main() {

    int n = 0 ;

    while(n < 1 || n > 6) {
        std::cout << "******************" << std::endl ;
        n++;

    while(n >= 2 && n <= 6) {
        std::cout << "*                *" << std::endl ;
        n++;
    }
    }

    return 0;
}