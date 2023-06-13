#include <iostream>
#include <string>

main() {

    double derajat_celsius;

    std::cout << "Silahkan masukkan suhu dalam satuan derajat celsius." << std::endl 
              << "Program akan mengkorversikannya kedalam satuan Fahrenheit." << std::endl ;

    std::cin >> derajat_celsius ;

    std::cout << "Suhu dalam satuan Fahrenheit adalah: " << (derajat_celsius * 9/5) + 32 << " Fahrenheit." << std::endl ;

    return 0;
}