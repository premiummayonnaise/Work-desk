#include <iostream>
#include <string>

struct quest {

    std::string task1 ;
    std::string task2 ;
    std::string task3 ;
    std::string task4 ;
    std::string task5 ;

};

void showTaskBar1() {

quest tier1 ;

    tier1.task1 = "Join the ITS ETAP training." ;
    tier1.task2 = "Build a power plant during the simulation." ;
    tier1.task3 = "Finish the last lesson of C++ on W3Schools." ;
    tier1.task4 = "Do 40 pushups." ;
    tier1.task5 = "Take a 40 minutes of power nap." ;


std::cout     << "Here are some tier 1 tasks." << std::endl << std::endl
              << tier1.task1 << std::endl
              << tier1.task2 << std::endl
              << tier1.task3 << std::endl
              << tier1.task4 << std::endl
              << tier1.task5 << std::endl ;

}


int main() {

    quest tier1 ;

    tier1.task1 = "Join the ITS ETAP training." ;
    tier1.task2 = "Build a power plant during the simulation." ;
    tier1.task3 = "Finish the last lesson of C++ on W3Schools." ;
    tier1.task4 = "Do 40 pushups." ;
    tier1.task5 = "Take a 40 minutes of power nap." ;

    quest tier2 ;

    tier2.task1 = "Drink the second cup of coffee." ;
    tier2.task2 = "Eat the breakfast." ;
    tier2.task3 = "Buy a nice lunch." ;
    tier2.task3 = "Isi pure it." ;

    std::cout << "Welcome to Sunday\'s coding session!" << std::endl
              << "------------------------------------" << std::endl
              << "You know, some tasks have to be done today." << std::endl
              << "We will hand you the task list for today." << std::endl
              << "------------------------------------" << std::endl ;

    showTaskBar1() ;


    return 0 ;
}
