#include <iostream>
#include <string>
#include <cmath>
    using namespace std;

double kalkulasi_hambatan() {

double tegangan_volt, arus_ampere ;

    cout << endl << "Program akan menghitung besar hambatan dalam satuan ohm." << endl
         << "Masukkan nilai tegangan dalam nilai volt." << endl ;
    cin  >> tegangan_volt ;
    cout << endl << "Masukkan nilai arus dalam satuan ampere." << endl ;
    cin >> arus_ampere ;
    cout << "Nilai hambatan dalam satuan Ohm adalah: " << tegangan_volt / arus_ampere << " Ohm" ;

    return 0;
}

double kalkulasi_arus() {

        double tegangan_volt, hambatan_ohm ;

    cout << endl << "Program akan menghitung besar arus dalam satuan ampere." << endl
         << "Masukkan nilai tegangan dalam nilai volt." << endl ;
    cin  >> tegangan_volt ;
    cout << endl << "Masukkan nilai hambatan dalam satuan ohm." << endl ;
    cin >> hambatan_ohm ;
    cout << "Nilai arus dalam satuan Ampere adalah: " << tegangan_volt / hambatan_ohm << " Ampere" ;

    return 0;
}

double kalkulasi_tegangan() {

            double arus_ampere, hambatan_ohm ;

     cout << "Program akan menghitung tegangan pada rangkaian." << endl
          << "------------------------------------------------" << endl
          << "Masukkan arus dalam satuan ampere." << endl;
     cin  >> arus_ampere ;
     cout << endl << "Masukkan hambatan dalam satuan ohm." << endl ;
     cin  >> hambatan_ohm ;
     cout << endl << endl << "Besar tegangan dalam satuan Volt adalah: " << arus_ampere * hambatan_ohm << " Volt" << endl << endl ;

     return 0;
}

main() {

        int pilihan_pemakai;

    cout << "Selamat datang di kalkulator simpel v0.1!" << endl
         << "-------------------------------------------------------------" << endl
         << "Kami menawarkan perhitungan cepat dari beberapa rumus fisika kelistrikan." << endl
         << "Pilih salah satu rumus yang ingin anda hitung." << endl
         << "-------------------------------------------------------------" << endl
         << "Tegangan dalam satuan volt (Ketik 1)." << endl
         << "Arus dalam satuan ampere (Ketik 2)." << endl
         << "Hambatan dalam satuan ohm (Ketik 3)." << endl
         << "-------------------------------------------------------------" << endl ;

    cin >> pilihan_pemakai ;

switch (pilihan_pemakai) {

    case (1) : {

        kalkulasi_tegangan() ;

        break;
    }

    case (2) : {

        kalkulasi_arus() ;

        break;
    }

    case (3) : {

        kalkulasi_hambatan() ;

        break;
    } }

   return 0;
}
