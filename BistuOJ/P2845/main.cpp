#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    double number1, number2, result;
    char op;

    cin >> number1 >> op >> number2;
    switch (op) {
        case '+':
            result = number1 + number2;
            break;
        case '-':
            result = number1 - number2;
            break;
        case '*':
            result = number1 * number2;
            break;
        case '/':
            if (number2 == 0){
                cout << "by 0 div" << endl;
                return 0;
            } else {
                result = number1 / number2;
            }
            break;
        default:
            break;
    }
    printf("%.2lf%c%.2lf=%.2lf", number1, op, number2, result);

    return 0;
}