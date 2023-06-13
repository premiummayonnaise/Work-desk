#include <iostream>
#include <string>

void luas_lingkaran2() {

    int jari_jari ;
    int pilihan_pengguna2 ;

    std::cout << "Program akan menghitung luas yang ada pada lingkaran." << std::endl
              << "Masukkan jari-jari pada lingkaran." << std::endl ;

    std::cin >> jari_jari ;

    std::cout << std::endl << "Luas pada lingkaran adalah: " << 3.14 * jari_jari * jari_jari << std::endl
              << "---------------------------------------------------------------------" << std::endl ;
}

void keliling_lingkaran() {

    int jari_jari ;
    int pilihan_pengguna2 ;

    std::cout << "Program akan menghitung luas pada lingkaran." << std::endl
              << "Masukkan jari-jari pada lingkaran." << std::endl ;

    std::cin >> jari_jari ;

    std::cout << std::endl << "Keliling pada lingkaran adalah: " << 2 * 3.14 * jari_jari << std::endl
              << "---------------------------------------------------------------------" << std::endl 
              << "Lanjut dengan menghitung luas? (1)" << std::endl
              << "Akhiri program (2)" << std::endl ;

    std::cin >> pilihan_pengguna2 ;

    switch (pilihan_pengguna2) {

        case 1 : {

            luas_lingkaran2();
            break;
        }

        case 2 : {

            std::cout << std::endl << "Alright! Have a nice day!" << std::endl ;
            break;
        }

        default: {

            std::cout << std::endl << "Pilihan pengguna tidak valid." << std::endl ;
            break;
        }
    }
}

void luas_lingkaran() {

    int jari_jari ;
    int pilihan_pengguna2 ;

    std::cout << "Program akan menghitung luas yang ada pada lingkaran." << std::endl
              << "Masukkan jari-jari pada lingkaran." << std::endl ;

    std::cin >> jari_jari ;

    std::cout << std::endl << "Luas pada lingkaran adalah: " << 3.14 * jari_jari * jari_jari << std::endl
              << "---------------------------------------------------------------------" << std::endl 
              << "Lanjut dengan menghitung keliling? (1)" << std::endl
              << "Akhiri program (2)" << std::endl ;

    std::cin >> pilihan_pengguna2 ;

    switch (pilihan_pengguna2) {

        case 1 : {

            keliling_lingkaran();
            break;
        }

        case 2 : {

            std::cout << std::endl << "Alright! Have a nice day!" << std::endl ;
            break;
        }

        default: {

            std::cout << std::endl << "Pilihan pengguna tidak valid." << std::endl ;
            break;
        }
    } 
}

int main() {

    int pilihan_pengguna ;

    std::cout << "Kalkulator penghitung luas dan keliling lingkaran." << std::endl
              << "--------------------------------------------------" << std::endl
              << "Hitung luas pada lingkaran (1)." << std::endl
              << "Hitung keliling pada lingkaran (2)." << std::endl 
              << "--------------------------------------------------" << std::endl ;

    std::cin >> pilihan_pengguna ;

    if( pilihan_pengguna == 1) {

        luas_lingkaran() ;

    } else if( pilihan_pengguna == 2) {

        keliling_lingkaran() ;

    } else {

        std::cout << "Pilihan pengguna tidak valid." << std::endl ;

    }

    return 0;

} 