#include <iostream>

using namespace std;

void palindrome1();

void palindrome2();

void palindrome3();

int main() {
    palindrome1();
    palindrome2();
    palindrome3();
    return 0;
}

void palindrome1() {
    for (int i = 1; i < 10; i++) {
        cout << i << ", ";
    }
    cout << endl;
}

void palindrome2() {
    for (int i = 1; i < 10; i++) {
        cout << 11 * i << ", ";
    }
    cout << endl;
}

void palindrome3() {
    for (int i = 1; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            cout << i << j << i << ", ";
        }
        cout << endl;
    }
}
