#include <iostream>
using namespace std;

double cube_volume (double x, double y, double z) {

	cout << "------------------------" << endl
         << "Volume kubus adalah " << x * y * z << " meter per kubik." << endl << endl ;

    	return x * y * z ;
    }

int main () {

		double x, y, z ;

	cout << "Kalkulator volume kubik." << endl
    	 << "------------------------" << endl
         << "Masukkan tinggi, lebar, dan panjang pada kubus." << endl
         << "------------------------" << endl ;

    cin  >> x >> y >> z;

    cube_volume(x, y, z) ;

    return 0 ;

    }
