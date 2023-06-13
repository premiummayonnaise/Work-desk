#include <iostream>
#include <iomanip>

int main() {
    int n;

    std::cout << "Multiplication Table!" << std::endl
              << "---------------------" << std::endl
              << "n = ";

    std::cin >> n;

    // Print the header row
    for (int kolom = 1; kolom <= n; kolom++) {
        std::cout << std::setw(4) << kolom;
    }
    std::cout << std::endl;

    // Print the table
    for (int baris = 1; baris <= n; baris++) {
        std::cout << std::setw(4) << baris;

        for (int kolom = 1; kolom <= n; kolom++) {
            std::cout << std::setw(4) << kolom * baris;
        }

        std::cout << std::endl;
    }

    return 0;
}
