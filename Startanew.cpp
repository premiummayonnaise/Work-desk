#include <iostream>
#include <string>

main() {

    int jumlah;

    std::cout << "Berapa banyak permen yang ada?" << std::endl ;
    std::cin >> jumlah ;

    if (jumlah == 7) {

        std::cout << "Jawaban yang tepat." << std::endl ;

    } else {

        std::cout << "Jawabanmu kurang tepat." << std::endl ;

    }

return 0;

}