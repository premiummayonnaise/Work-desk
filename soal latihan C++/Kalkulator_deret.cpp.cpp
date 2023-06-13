#include <iostream>

void deret_genap() {

    int jumlah;
    int i = 1;

    std::cout << "Masukkan jumlah deret dari bilangan genap yang diinginkan." << std::endl
              << "----------------------------------------------------------" << std::endl ;
    std::cin >> jumlah ;
    std::cout << "Deretan dari " << jumlah << " bilangan ganjil." << std::endl ;

    while (i <= jumlah) {

        std::cout << 2 * i << " " ;
        i++ ;

    }
}

void deret_ganjil() {

    int number;
    int i = 1;

    std::cout << "Masukkan jumlah deret dari bilangan ganjil yang diinginkan." << std::endl
              << "-----------------------------------------------------------" << std::endl;
    std::cin >> number;
    std::cout << "Deretan " << number << " bilangan ganjil." << std::endl
                  << "-----------------------------------------------------------" << std::endl;

    while(i <= number) {

        std::cout << (2 * i) - 1 << ", " ;
        i++;

    }
}

int main() {

    int pilihan_pengguna;

    std::cout << "Selamat datang di kalkulator deret!" << std::endl
              << "-----------------------------------" << std::endl
              << "Hitung deret ganjil (1)" << std::endl
              << "Hitung deret genap (2)" << std::endl 
              << "-----------------------------------" << std::endl ;

    std::cin >> pilihan_pengguna ;

    switch(pilihan_pengguna) {

        case 1: {
            deret_ganjil();
            break;
        }

        case 2: {
            deret_genap();
            break;
        }

        default: {
            std::cout << "Pilihan pengguna tidak valid." ;
        }

    }

        return 0;
}