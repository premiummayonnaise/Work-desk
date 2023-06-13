#include <iostream>
    using namespace std;

int main () {

    string Quote [6] = {"Saturday is better than Sunday.",
                        "The best part about school is going home.",
                        "An engineering major student.",
                        "Somehow, we need to find out what will probably happen next.",
                        "Judging by how they share the ads, we can tell that it\'s just a marketing program.",
                        "I don\'t know! Let\'s just use the wait and see strategy!"
                        } ;

//array diatas menyimpan quotes quotes yang akan digenerasi oleh sistem.

    for (int i = 0; i < 7; i++) {

/*buat loop nya, pake command for dengan format for(kondisi inisiasi, kondisi terminasi, kondisi pengulangan)
 baru {kode yang akan dieksekusi berulang}.*/

        cout << Quote[i] << endl ;
     }

  return 0;
}
