#include <iostream>
#include <cmath>
//Other functions, such as sqrt (square root), round (rounds a number) and log (natural logarithm), can be found in the <cmath> header file.

    using namespace std;

main() {
    int X, Y;

    cin >> X ;
    cin.ignore ();
    cin >> Y ;
    cout << sqrt(X + Y);

return 0;
}
