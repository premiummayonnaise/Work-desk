#include <iostream>
#include <string>
    using namespace std;

void rumus_voltase (int arus, int hambatan) {
//
    cout << "Voltase pada rangkaian adalah: " << arus * hambatan << endl ;

}

int main() {

    int arus, hambatan;

    cin >> arus >> hambatan ;
    rumus_voltase(arus, hambatan) ;

return 0;

}
