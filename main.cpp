#include <iostream>

using namespace std;

int main() {

    int maximum = 1000;
    cout << "Palindrome Numbers between 1 and " << maximum << " are :";

    for (int num = 1; num < maximum + 1; ++num) {
        int temp = num;
        int reverse = 0;

        while (temp > 0) {
            int Reminder = temp % 10;
            reverse = (reverse * 10) + Reminder;
            temp = temp / 10;
        }
        if (num == reverse) {
            cout << num << " ";
        }


    }

    return 0;
}
