#include <iostream>
    using namespace std;

    main() {

    int X, Y, Z ;

    cout << endl << "masukkan lebar pada kubus!" << endl << endl ;
    cin >> X;

    cout << endl << "masukkan panjang pada kubus!" << endl << endl ;
    cin.ignore() ;
    cin >> Y;

    cout << endl << "masukkan tinggi pada kubus!" << endl << endl ;
    cin.ignore () ;
    cin >> Z;

    int Volume_Kubus = X*Y*Z ;

    cout << endl << "Volume dari kubus tersebut adalah " << Volume_Kubus << "." << endl << endl ;


    return 0; }
