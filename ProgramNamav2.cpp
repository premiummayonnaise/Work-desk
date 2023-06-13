#include <iostream>
#include <string> //Gunakan header string untuk penyimpanan program yang lebih spesifik.
    using namespace std;

main() {
    string nama_lengkap; //Untuk memberi nama pada suatu variabel yang akan diinput oleh user.

    cout << "Masukkan nama lengkapmu." << endl;
    getline (cin, nama_lengkap); //we often use the getline() function to read a line of text.
    cout << "Nama lengkapmu adalah: " << nama_lengkap << endl << endl ;

    return 0;
    }
