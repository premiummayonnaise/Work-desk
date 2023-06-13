#include <iostream>
#include <cmath>
    using namespace std;

main() {
//---------------------------------------------------------------------------------------------------------------------

    int desired_geometry ; //memberikan pilihan kepada pengguna program untuk memilih bentuk mana yang akan dihitung volume atau luasnya.

            cout << "What would you like to calculate?" << endl << endl ;
            cout << "We offer you: " << endl << endl << "cube volume (type 1), circle area (type 2), trapezoid area (type 3)," << endl << endl ;
            cout << "Triangle area (type 4), Kite kite (type 5), rectangular area (type 6)" << endl << endl << endl ;
            cin >> desired_geometry ;

//---------------------------------------------------------------------------------------------------------------------

    switch (desired_geometry) { //kode switch hanya menerima bentuk berupa integer, maka pilihan dibuat dalam bentuk angka (integer).

//---------------------------------------------------------------------------------------------------------------------

    case (1): { //skenario yang akan muncul bila pengguna menginput angka 1, menghitung volume kubus.

        int cube_width, cube_length, cube_height ;

            cout << endl << "Affirmative. We will calculate the volume of a cube." << endl ;
            cout << "Insert cube width." << endl << endl ;
            cin >> cube_width ;

            cout << endl << "Insert cube length" << endl << endl ;
            cin >> cube_length ;

            cout << endl << "Insert cube heigth" << endl << endl ;
            cin >> cube_height ;

            cout << endl << "The volume of the cube is equal to " << cube_width * cube_length * cube_height ;

        break; }

//----------------------------------------------------------------------------------------------------------------------

        case (2): { //skenario yang muncul bila pengguna menginput angka 2, menghitung luas lingkaran.

                const float phi = 3.14 ;
                int radius ;

            cout << endl << "We will now calculate circle area." << endl << endl ;
            cout << "Enter the circle's radius." << endl << endl ;
            cin >> radius ;
            cout << endl << endl << "The area of the circle is equal to: " << phi * radius * radius << endl << endl ;

        break; }

//------------------------------------------------------------------------------------------------------------------------

        case (3): { //akan menghitung luas trapesium

                int ruasA, ruasB, tinggi_trapesium ;

            cout << endl << "We will calculate trapezoid area." << endl << endl ;
            cout << "Enter the upper length of the trapezoid." << endl << endl ;
            cin >> ruasA ;

            cout << endl << "Enter the lower length of the trapezoid." << endl << endl ;
            cin >> ruasB ;

            cout << endl << "Enter the trapezoid's length." << endl << endl ;
            cin >> tinggi_trapesium ;

            cout << endl << "The trapezoid's area is: " << (ruasA + ruasB)/2 * tinggi_trapesium ;

        break ; }

         default : {

            cout << "invalid choice. Please insert the number properly." << endl << endl ;

         }
//-------------------------------------------------------------------------------------------------------------------------

    return 0;

    }

}
