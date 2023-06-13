#include <iostream>
#include <string>

void greetFromJekrois(std::string quote = "You currently have no quotes.") {
//this function will show up once the player starts the game.
    std::cout << "--------------------------------------------------------------------------------------------" << std::endl
              << "Arknights: Dumb Expeditions! (2023)" << std::endl
              << "Version 0.0.1, All rights reserved." << std::endl
              << "Made by Jekrois! Hope you enjoy!" << std::endl
              << "--------------------------------------------------------------------------------------------" << std::endl ;
}

void story() {
//the story is the bread and butter to the game! Who would want to play a game without a story?!
    std::cout << "--------------------------------------------------------------------------------------------" << std::endl
              << "Once upon a time, on the landship of Rhodes Island..." << std::endl
              << "Ahem! Specifically, the story takes place on the Rhodes Canteen!" << std::endl
              << "It's the place where Rhodes Islanders get nice meals to prevent their hunger." << std::endl
              << "Hmm? Providing meals to a landship?? This canteen surely has a laaaaaarge storage to store food, eh?" << std::endl
              << "Well, it surely has! The food is actually stored in a safe. In which, only few people have access to the location." << std::endl
              << "But ah, bad things really can happen unexpectedly." << std::endl
              << "Ceobe, the food menace, had discovered the location of the food reserve! She ate all of the food there mercilessly." << std::endl
              << "So... Here comes this little mess on Rhodes Island!" << std::endl
              << "Everyone on the landship is starting to get hungry since they can't have any meals now!" << std::endl
              << "It's all because of Ceobe! Bad, bad doggo!" << std::endl
              << "So here's a task for you, doctor! You will be taking an expedition with an operator of your choice!" << std::endl
              << "In order to find food and prevent Rhodes Islanders from eating each other due to starvation!" << std::endl
              << "So here you go! Pick your operator and save Rhodes Island!" << std::endl
              << "--------------------------------------------------------------------------------------------" << std::endl ;
}

main () {

    std::string Characters [5] = {"Blaze", "Amiya", "Rosmontis", "Closure", "Kroos"} ;
    int players_decision ;
    int players_decision2 ;

    greetFromJekrois() ;
    story() ;

    std::cout << "To start, you have to pick one of your operators, which is chosen randomly." << std::endl
              << "--------------------------------------------------------------------------------------------" << std::endl
              << "Start by picking a number! (0~4)" << std::endl ;

    std::cin  >> players_decision ;

    std::cout << "Operator " << Characters[players_decision] << " Will give you a company through the journey!" << std::endl
              << "--------------------------------------------------------------------------------------------" << std::endl
              << "Greet your operator! How would you greet her?" << std::endl
              << "--------------------------------------------------------------------------------------------" << std::endl
              << "Give a nice greeting (1)." << std::endl << "Give a harsh response (2)." << std::endl ;

    std::cin  >> players_decision2 ;

    if (players_decision2 == 1 ) {

        std::cout << Characters[players_decision] << ": " << "Ehe, hope we can save the whole landship now, doctor!" << std::endl ;

    }

    else if (players_decision2 == 2) {

        std::cout << Characters[players_decision] << ": " << "\*sobs\* doctor, why do you have to be so mean? Uhu..." << std::endl ;

    }

    return 0 ;
}
