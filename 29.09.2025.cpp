
#include <iostream>
using namespace std;

void task1(int num) {
    if (num > 0)
        cout << "Positive\n";
    else
        cout << "Negative or zero\n";
}

void task2(int num) {
    if (num % 2 == 0)
        cout << "Even number\n";
    else
        cout << "Odd number\n";
}

void task3(int a, int b) {
    if (a > b)
        cout << "Maximum number: " << a << endl;
    else
        cout << "Maximum number: " << b << endl;
}

void task4(int grade) {
    if (grade >= 1 && grade <= 5) {
        if (grade <= 2) cout << "Fail\n";
        else cout << "Pass or above\n";
    } else {
        cout << "Invalid grade\n";
    }
}

void task5(char c) {
    c = tolower(c);
    if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        cout << "Vowel\n";
    else
        cout << "Consonant\n";
}

void task6(int year) {
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        cout << "Leap year\n";
    else
        cout << "Not a leap year\n";
}

void task7(double a, double b, char op) {
    if (op == '+') cout << a + b << endl;
    else if (op == '-') cout << a - b << endl;
    else if (op == '*') cout << a * b << endl;
    else if (op == '/') {
        if (b == 0) cout << "Error: division by zero\n";
        else cout << a / b << endl;
    }
    else cout << "Invalid operator\n";
}

void task8(int num) {
    if (num >= 10 && num <= 20)
        cout << "Number is in [10, 20]\n";
    else
        cout << "Number is not in [10, 20]\n";
}

void task9(int month) {
    if (month == 12 || month == 1 || month == 2) cout << "Winter\n";
    else if (month >= 3 && month <= 5) cout << "Spring\n";
    else if (month >= 6 && month <= 8) cout << "Summer\n";
    else if (month >= 9 && month <= 11) cout << "Autumn\n";
    else cout << "Invalid month number\n";
}

void task10(int num) {
    if (num < 100 || num > 999) {
        cout << "Not a three-digit number\n";
        return;
    }
    int a = num / 100;
    int b = (num / 10) % 10;
    int c = num % 10;
    if (a == c)
        cout << "Palindrome number\n";
    else
        cout << "Not a palindrome number\n";
}

int main() {
    task1(5);
    task2(4);
    task3(7, 9);
    task4(3);
    task5('E');
    task6(2024);
    task7(10, 2, '/');
    task8(15);
    task9(7);
    task10(121);
    return 0;
}
