#include <iostream>

void versi_for() {

    int n;
    std::cin >> n;

    for(int number = 1; number <= n; number++) {
        std::cout << number * number << std::endl;
    }

}

void versi_while() {

    int n;
    int number;

    std::cin >> number; 
    while(n <= number) {
        std::cout << n * n << std::endl ;
        n++;
    }

}

void versi_do() {

    int number;
    int n = 1 ;

    std::cin >> number ;

    do{
        std::cout << n * n << std::endl ;
        n++;
    } while(n <= number) ;
}

int main() {

    versi_do();
    return 0;
}