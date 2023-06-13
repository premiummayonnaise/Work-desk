#include <iostream>
#include <cmath>

    using namespace std;

main() {

    int sudut;
    double phi = 3.14;

    cout << "Kalkulator trigonometri dalam satuan sin(x)" << endl << endl << "Masukkan sudut pada fungsi sin(x)." << endl << endl ;
    cin >> sudut ;

    double rad;

    rad = sudut * 3.14/180 ;
    double hasil_perhitungan = sin(rad);

    cout << "Perhitungan dari sin(x) adalah: " << hasil_perhitungan;

    return 0;

}
