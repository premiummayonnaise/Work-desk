#include <iostream>

int umurBaduSita() {

    int Badu, Sita;

    std::cout << "Masukkan umur Badu!" << std::endl;
    std::cin  >> Badu;
    std::cout << "Umur Badu adalah: " << Badu << std::endl;
    std::cout << "Umur Sita adalah: " << Badu + 2 << std::endl;

    return 0;
}

int kalkulator_diskon() {

    double harga_barang;

    std::cout << "Masukkan harga pada barang! Harga barang akan diskon sebesar 10\%." << std::endl;
    std::cin  >> harga_barang;
    std::cout << std::endl << "Harga barang setelah diskon adalah: " << harga_barang - harga_barang/10 << std:: endl;
    std::cout << "Harga barang sebelumnya adalah: " << harga_barang << std::endl;
    std::cout << "Besar harga yang dipotong: " << harga_barang/10 << std::endl;
    std::cout << "besar diskon: 10\%" << std::endl;

    return 0;
}

void angka_mundur() {

    char x = 'A' ;

    while(x <= 'Z') {

    std::cout << x << std::endl;
    x++;

    }
}

int main() {

    int x, i;

    std::cout << "Enter a number to see its factor." << std::endl ;
    std:: cin >> x ;
    std::cout << std::endl << "The factors of " << x << " are..." << std::endl ;

    for (i = 1; i <= x; ++i) {

    if(x % i == 0) {

    std::cout << x/i << " " ;

    } else if (x <= 0) {

    std::cout << "The number is invalid." ;

    }}

return 0;

}


