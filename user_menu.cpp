#include <iostream>
#include <string>

int main() {
    int i = 0, p = 0, q = 0;
    int user_order;

    std::cout << "Welcome to Eastern Side Coma Point." << std::endl
              << "We offer you the finest tea and coffee in town!" << std::endl
              << "---------------------------------------------------" << std::endl
              << "What would you like to order?" << std::endl;

    std::string food[4] = {"Aglio Olio (1)", "Nasi Kucing (2)", "Chicken parmigiana (3)", "Fish and chips (4)"};
    std::string beverages[5] = {"Caramel macchiato (5)", "Americano (6)", "Vietnam Drip (7)", "Piccolo (8)", "Brown Sugar (9)"};
    std::string snacks[3] = {"French fries (10)", "Baby potato (11)", "Salted tofu (12)"};

    while (i <= 3) {
        std::cout << food[i] << std::endl;
        i++;
    }

    while (p <= 4) {
        std::cout << beverages[p] << std::endl;
        p++;
    }

    while (q <= 2) {
        std::cout << snacks[q] << std::endl;
        q++;
    }

    std::cout << "-----------------------------------------------------------------------------" << std::endl
              << std::endl << "Please start ordering by typing the number attached to the menu." << std::endl;
    std::cin >> user_order;

    return 0;
}
