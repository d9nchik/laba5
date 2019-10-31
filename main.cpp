#include <iostream>

using namespace std;

int main() {

    int maximum = 1000;//Змінна що несе значееня максимального паліндрому
    cout << "Palindrome Numbers between 1 and " << maximum << " are :";

    for (int num = 1; num < maximum + 1; ++num) {
        int temp = num;//Створюємо копію num з якою будемо працювати
        int reverse = 0;//Тут будемо зберігати реверсоване число.

        while (temp > 0) {
            int Reminder = temp % 10;//змінна для збереження кожного символу
            reverse = (reverse * 10) + Reminder;
            temp = temp / 10;
        }
        if (num == reverse) {
            cout << num << " ";
        }


    }

    return 0;
}
