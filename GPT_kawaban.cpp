#include <iostream>

void swap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int x, y;

    std::cout << "Enter the value of x and y: ";
    std::cin >> x >> y;

    std::cout << "Before swapping: x = " << x << ", y = " << y << std::endl;

    swap(x, y);

    std::cout << "After swapping: x = " << x << ", y = " << y << std::endl;

    return 0;
}
