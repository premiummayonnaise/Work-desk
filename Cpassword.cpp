#include <iostream>
    using namespace std;

main() {

    string password;

    cout << "Enter your password." << endl << endl ;
    cin >> password ;
//--------------------------------------------------------------------- Kondisi yang akan muncul bila password betul.
if ( password == "coztrasapta") {

    cout << "Anda telah berhasil melakukan log in." << endl << endl ;

    }
//--------------------------------------------------------------------- Kondisi yang akan muncul pada password2.
else if ( password == "coztra") {

    cout << "Password nya hampir betul." << endl << endl ;

    }
//--------------------------------------------------------------------- Kondisi yang akan muncul bila password salah.
else {

    cout << "Akses ditolak." << endl << endl ;

    }
//---------------------------------------------------------------------
        return 0;

    }
