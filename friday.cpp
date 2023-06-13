#include <iostream>
#include <string>
    using namespace std;

struct Character {

    string fullname;
    string hobby;
    string age;
    string height;
    string weight;

};


void function(string firstname, string lastname) {

    cout << endl << endl << "--------------------------------------------------" << endl
         << "Your character's name is: " << firstname << " " << lastname << endl ;

}

void function2(string greetings = "Hello! Welcome to our C++ roleplay game!") {

    cout << greetings << endl ;
    cout << "-------------------------------------------------------------------" << endl
         << "-------------------------------------------------------------------" << endl
         << "In the game, you will interact with a few characters from the game." << endl
         << "Keep in mind that different choices will lead to different endings!" << endl ;

}

void printCharacter1() {
    Character c1;
//Give the pointer to the character in the function.
    c1.fullname = "Stefan Arden" ;
    c1.hobby = "Playing basketball" ;
    c1.age = "15 years old" ;
    c1.height = "174 centimeters" ;
    c1.weight = "69 kilograms" ;

    cout << endl << endl
         << "This is your friend, " << c1.fullname << endl
         << "His full name is: " << c1.fullname << endl
         << "His hobby is: " << c1.hobby << endl
         << "His age is: " << c1.age << endl
         << "His height is: " << c1.height << endl
         << "His weight is: " << c1.weight << endl ;
}

void printCharacter2() {
    Character c2;
//Once a variable is already declared in a struct, it doesn't have to be redeclared when used.
    c2.fullname = "Jody Hutapea" ;
    c2.hobby = "Pencak Silat" ;
    c2.age = "17 years old" ;
    c2.height = "164 centimeters" ;
    c2.weight = "54 kilograms" ;

    cout << endl << endl
         << "This is your friend, " << c2.fullname << endl
         << "His full name is: " << c2.fullname << endl
         << "His passion is: " << c2.hobby << endl
         << "His age is: " << c2.age << endl
         << "His height is: " << c2.height << endl
         << "His weight is: " << c2.weight << endl ;
}

main () {

        string firstname, lastname;

    cout << "Welcome to our C++ roleplaying game!" << endl
         << "------------------------------------" << endl
         << "Please enter you character's name!" << endl ;

    cin >> firstname >> lastname ;

    function(firstname, lastname);
    function2();
    printCharacter1() ;
    printCharacter2() ;

        return 0;

}
