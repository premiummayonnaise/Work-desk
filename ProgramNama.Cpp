#include <iostream>
    using namespace std;

int main () {

    int X, Y, Z;
    string Your, Name;

    cout << "Masukkan nama depan." << endl << endl ;
    cin >> Your ;
        cout << endl;

    cin.ignore();
    cout << "Masukkan nama belakang." << endl << endl ;
    cin >> Name ;
        cout << endl;
//Fungsi cin.ignore() berfungsi agar kita dapat memasukkan input kedua setelah input pertama.

    string FullName = Your + " " + Name + "." ;
    cout << "Nama lengkapmu adalah: " << FullName << endl << endl ;

//Tipe variabel yang merupakan hasil dari operasi harus didefiniskan setelah input dari kedua variabel dimasukkan.


    return 0;

    }
