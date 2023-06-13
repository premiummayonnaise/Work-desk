#include <iostream>
#include <string>

int myFunction() {

    int x, y = x ;

    std::cout << "Enter the value of x and y." << std::endl;
    std::cin >> x >> y ;

    return x;
}

int mySwap() {

    int x, y = y ;

    std::cout << x << std::endl << y << std::endl;

    return y;
}


main() {

    myFunction();

    int x, y;

    std::cout << "Before swapping, x = " << x << std::endl << "and y = " << y << std::endl;

    mySwap();

    return 0;
}
