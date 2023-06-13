#include <iostream>
#include <cmath>
    using namespace std ;

int main() {

        int kebutuhan_pengguna;

    cout << "Selamat datang di kalkulator diskon barang!" << endl
         << "-------------------------------------------" << endl << endl ;
    cout << "Mana yang kira kira ingin dihitung?" << endl << endl << endl
         << "-------------------------------------------" << endl << endl
         << "Harga barang setelah diskon (Ketik 1)." << endl << endl
         << "Harga barang yang sebenarnya sebelum diskon (Ketik 2)." << endl << endl
         << "Diskon yang berlaku pada harga (Ketik 3)." << endl << endl
         << "-------------------------------------------" << endl << endl ;

    cin >> kebutuhan_pengguna ;

    switch (kebutuhan_pengguna) {

            case (1) : {

                double harga, diskon;
                double hasil = (diskon/100) * harga ;

                cout << endl << endl << "Baik, menghitung harga barang setelah diskon." << endl << endl
                     << "---------------------------------------------------------------" << endl << endl
                     << "Masukkan harga barang asli" << endl << endl ;
                cin  >> harga ;
                cout << endl << endl << "Masukkan besar diskon dalam satuan persen! (contoh: 25)." << endl << endl ;
                cin.ignore() ;
                cin >> diskon ;
                cout << "Harga barang setelah diskon adalah: " << (diskon * harga) / 100 << endl << endl ;

        break ;
            }

            case (2) : {

                double harga_diskon, diskon;

                cout << endl << endl << "Menghitung harga sebelum diskon." << endl << endl
                     << "---------------------------------------------------------------" << endl << endl
                     << "Masukkan besar diskon dalam satuan persen! (contoh: 40)" << endl << endl ;
                cin >> diskon ;
                cout << endl << endl << "Masukkan harga barang setelah diskon!" << endl << endl ;
                cin >> harga_diskon ;
                cout << "Harga barang sebelum diskon adalah: " << (harga_diskon * 100 ) / diskon << endl << endl ;

        break ;
            }

            case (3) : {

                double harga, harga_diskon;

                cout << endl << "Menghitung besar diskon pada harga." << endl << endl
                     << "---------------------------------------------------------------" << endl << endl
                     << "Masukkan harga asli barang" << endl << endl ;
                cin >> harga ;
                cout << endl << endl << "Masukkan harga barang setelah diskon." << endl << endl ;
                cin >> harga_diskon ;

                double diskon = harga_diskon / harga ;

                cout << "Besar diskon yang berlaku pada barang adalah: " << diskon * 100 << "\%" << endl << endl ;

        break ;
            }


    }


    return 0;

}
