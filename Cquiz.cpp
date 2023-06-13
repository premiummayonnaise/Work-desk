#include <iostream>
#include <string>
#include <cmath>

    using namespace std;

main () {
        int X;

    cout << "what is the answer to 5 times 10?" << endl << endl ;
    cin >> X ;

    //Menunjukkan kondisi yang akan muncul bila jawaban yang dimasukkan tepat.
    if (X == 50) {

    cout << endl << "That is the right answer." << endl << endl ;

    }

    //menunjukkan kondisi yang akan muncul bila jawaban yang dimasukkan tidak tepat.
    else if (X != 50){

    cout << endl << "That is not the right answer." << endl << endl ;

    }

    return 0;

    }

