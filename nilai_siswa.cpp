#include <iostream>
#include <cmath>
#include <string>

    using namespace std;

main () {

    int KKM = 75 ;
    int nilai_siswa ;

    cout << "Masukkan nilai siswa." << endl << "---------------------------"<< endl << endl ;
    cin >> nilai_siswa ;

//-------------------------------------------------------------------------------
        if ( nilai_siswa >= 75 ) { //Apabila variabel melampaui 75, maka outputnya lulus.

    cout << "Selamat. Siswa dinyatakan lulus." << endl << endl ;

    }
//-------------------------------------------------------------------------------
        else if ( nilai_siswa >= 70 && nilai_siswa <= 74 ){ //Dengan logika "&&", kita dapat mengatur range variabel.

    cout << "Siswa dinyatakan lulus bersyarat." << endl << endl ;

    }
//-------------------------------------------------------------------------------
        else { //Bila nilai tidak masuk range pada logika "&&" dan kelulusan.

    cout << "Siswa tidak dinyatakan lulus. Tetap semangat." << endl << endl ;

    }
//--------------------------------------------------------------------------------
    return 0 ;

    }
