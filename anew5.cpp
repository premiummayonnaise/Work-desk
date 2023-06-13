#include <iostream>

void loopFunc() {

    int i = 0 ;

    while(i <= 10) {

        std::cout << "I am not here!" << std::endl ;
        i++ ;
    }

}


int main() {

    int x = 0 ;


    loopFunc();
    while(x <= 10) {

        std::cout << "I am here!" << std::endl ;
        x++;

    }

    return 0;
}
