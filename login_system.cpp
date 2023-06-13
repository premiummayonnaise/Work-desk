#include <iostream>
#include <string>

void user_features() {

    int i = 0,  p = 0, q = 0 ;
    int user_order ;

    std::cout << "Welcome to Eastern Side Coma Point." << std::endl
              << "We offer you the finest tea and coffee in the town!" << std::endl
              << "---------------------------------------------------" << std::endl
              << "What would you like to order?" << std::endl ;

    std::string food[4] = { 
        "Aglio Olio (1)", 
        "Nasi Kucing (2)", 
        "Chicken parmigiana (3)", 
        "Fish and chips (4)" 
        } ;

    std::string beverages[5] = { 
        "Caramel macchiato (5)", 
        "Americano (6)", 
        "Vietnam Drip (7)", 
        "Piccolo (8)", 
        "Brown Sugar (9)" 
        } ;

    std::string snacks[3] = { 
        "French fries (10)", 
        "Baby potato (11)", 
        "Salted tofu (12)" 
        } ;

    while(i <= 3) {

        std::cout << food[i] << std::endl ;
        i++ ;

    } ;

    while(p <= 4) {

        std::cout << beverages[p] << std::endl ;
        p++ ;

    } ;

    while(q <= 2) {
        
        std::cout << snacks[q] << std::endl ;
        q++ ;

    } ;

        std::cout << "-----------------------------------------------------------------------------" << std::endl 
                  << std::endl << "Please start ordering by typing the number attached on the menu." << std::endl ;
        std::cin >> user_order ;

}

void user_login() {

    std::string username, password;

    std::cout << "Please enter an existing username and password." << std::endl 
              << "Username: " ;

        std::cin >> username ;

    std::cout << "Password: " ;

        std::cin >> password ;


    if (username == "coztrasapta" && password == "NGAJOAK") {

        std::cout << "Access permitted." << std::endl ;

        user_features() ;

    } else {

        std::cout << "Access denied. Forgot your password? Or please do sign-in." << std::endl ;

    }

}

void user_signin() {

    std::string username, password, username2, password2;

    std::cout << "Please enter your username and password." << std::endl 
              << "Username: " ;

        std::cin >> username ;

    std::cout << "Password: " ;

        std::cin >> password ;

    std::cout << "Looking good! We've received your new username and password!" << std::endl
              << "Now please confirm your new username and password." << std::endl
              << "Username: " ;

        std::cin >> username2 ;

    std::cout << "Password: " ;

        std::cin >> password2 ;


    if(username == username2 && password == password2) {

        std::cout << "Access permitted. Save your username and password?" << std::endl ;

        user_features() ;

    } else {

        std::cout << "Access denied. Make sure that you confirm your username and password correctly."
                  << std::endl ;


    }

}

void user_error() {

    std::cout << "Error. Please enter a viable choice with one of those numbers above." ;

}

int main() {

    int user_decision;

    std::cout << "Eastern Side Coma Point." << std::endl
              << "Welcome to our web! Feel free to order." << std::endl
              << "To start making orders, please log in or sign in." << std::endl
              << "----------------------------------------------------------------" << std::endl
              << "I already have an account (1)." << std::endl 
              << "I don't have an account yet (2)." << std::endl << std::endl ;

    std::cin >> user_decision ;

    if(user_decision == 1) {

        user_login();

    } else if(user_decision == 2) {

        user_signin();

    } else {

        user_error();

    }
        return 0;
}