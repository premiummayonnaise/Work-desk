#include <iostream>
#include <string>

main() {

    int i;

    std::cin >> i ;

    do {

    std::cout << "We are counting down to zero! " << i << std::endl;
    i-- ;

    } while (i >> 0) ;

    return 0;
}
