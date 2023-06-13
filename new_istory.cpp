#include <iostream>
#include <string>
#include <cmath>

struct Biodata {
    std::string nama; 
    std::string umur;
    std::string asal;
    std::string kelahiran;
    std::string kelas;
} ;

void biodata_curt() {

    Biodata biodata1;
    biodata1.nama = "Curt";
    biodata1.umur = "16 tahun";
    biodata1.asal = "West Australia";
    biodata1.kelahiran = "West Australia, tahun 2006";
    biodata1.kelas = "10 SMA";

    std::cout << "Berikut adalah biodata lengkap dari seorang siswa." << std::endl
              << biodata1.nama << std::endl
              << biodata1.umur << std::endl
              << biodata1.asal << std::endl
              << biodata1.kelahiran << std::endl
              << biodata1.kelas << std::endl ;

}

void biodata_sarah() {

    Biodata biodata2;
    biodata2.nama = "Sarah" ;
    biodata2.umur = "17 tahun" ;
    biodata2.asal = "East Coppenhagen" ;
    biodata2.kelahiran = "Jawa Tengah" ;
    biodata2.kelas = "11 SMA" ;

    std::cout << "Berikut adalah biodata dari salah seorang siswa: " << std::endl
              << "Nama siswa: " << biodata2.nama << std::endl 
              << "Umur siswa: " << biodata2.umur << std::endl
              << "Asal kota: " << biodata2.asal << std::endl
              << "Tempat kelahiran: " << biodata2.kelahiran << std::endl
              << "Dari kelas: " << biodata2.kelas << std:: endl ;

}

main() {

    biodata_curt() ;
    biodata_sarah() ;

    return 0;

}