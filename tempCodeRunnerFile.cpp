#include <iostream>

int main() {
    double X, Y;

    std::cout << "Kalkulator FPB pada kedua bilangan." << std::endl
              << "-----------------------------------" << std::endl
              << "Masukkan nilai pada bilangan pertama." << std::endl ;

    std::cin >> X;

    std::cout << "Masukkan nilai pada bilangan kedua." << std::endl;

    std::cin >> Y;

    for(int i = 1; i <= X; i++) {
        double divident1 = X/i ;
        std::cout << divident1 << std::endl;
    

    for(int n = 1; n <= Y; n++) 
        double divident2 = Y/n ;
        std::cout << divident2 << std::endl;
    

    std::cout << "Faktor persekutuannya adalah: " << std::endl ;

    if(divident1 == divident2) 
        std::cout << divident1 << std::endl ;
    }

    return 0;
}