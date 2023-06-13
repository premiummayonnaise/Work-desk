#include <iostream>
#include <string>
#include <cmath>

struct Biodata {
    std::string nama;
    std::string umur;
    std::string asal;
    std::string kelahiran;
    std::string kelas;
};

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
              << biodata1.kelas << std::endl;
}

int main() {
    biodata_curt();
    return 0;
}
