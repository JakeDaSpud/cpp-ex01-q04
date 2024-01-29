#include <iostream>

//Write a program to calculate the product of all numbers from 1 to 10 (i.e. 1x1, 2x2 etc.)

using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        cout << i << " * " << i << " = " << i * i << endl;
    }

    return 0;
}
