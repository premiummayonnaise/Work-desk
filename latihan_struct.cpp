#include <iostream>
#include <string>
#include <cmath>
    using namespace std;

main () {

//struct mengandung variabel yang siap untuk digunakan, beserta dengan tipe variabel nya.

    struct{
     string nama;
     string kepribadian;
     int kelahiran;
    } murid ;

//dalam pemberian nilai pada variabel, tak perlu disertai tipe variabel, karena sudah ditentukan tipe nya pada struct.

   murid.nama = "Timmy" ;
   murid.kepribadian = "ESFJ" ;
   murid.kelahiran = 2006 ;

//sama juga dengan ini, variabel sudah punya nilai spesifik dan bisa langsung dimasukkan dalam kode.

   cout << murid.kelahiran << endl ;
   cout << murid.nama << endl ;
   cout << murid.kepribadian << endl << endl;

//kesimpulannya, structure pada C++ berguna untuk memberikan arahan kepada pembuat kode agar variabel yang ada pada program lebih spesifik.
   return 0;
}
