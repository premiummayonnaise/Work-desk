#include <iostream>

int main() {

    int i;

    std::cout << "Program ini akan mengecek sebuah bilangan bulat termasuk negatif atau positif." << std::endl
              << "------------------------------------------------------------------------------" << std::endl 
              << "Masukkan sebuah bilangan bulat." << std::endl ;

    std::cin >> i ;

    if(i >= 0) {
        std::cout << "Bilangan termasuk bilangan positif." ;
    } else {
        std::cout << "Bilangan termasuk bilangan negatif." ;
    }
    
    return 0;
}