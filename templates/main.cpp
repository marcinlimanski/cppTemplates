#include <iostream>

using namespace std;

void passByValue(int x);

void passByReference(int *x);

int main() {
    int number = 21;

    passByValue(number);
    cout << number << endl;

    passByReference(&number);
    cout << number << endl;

    return 0;
}

void passByValue(int x) {
    x = 99;
}

void passByReference(int *x) {
    *x = 66;
}