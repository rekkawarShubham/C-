//=========================================================================================//

#include <iostream>
using namespace std;

class Calculator {

public:
    double add(double a, double b) {
        return a + b;
    }

    double subtract(double a, double b) {
        return a - b;
    }

    double multiply(double a, double b) {
        return a * b;
    }

    double divide(double a, double b) {
        return a / b;
    }
};
//=========================================================================================//

int main() {

    double a, b;
    char c;
    Calculator calculator;
    interact:
    cout << "Enter first number, operator, second number:" << endl;
    cin >> a >> c >> b;
    switch (c) {
        case '+':
            cout << "Answer = " << calculator.add(a, b) << endl;
            break;
        case '-':
            cout << "Answer = " << calculator.subtract(a, b) << endl;
            break;
        case '*':
            cout << "Answer = " << calculator.multiply(a, b) << endl;
            break;
        case '/':
            cout << "Answer = " << calculator.divide(a, b) << endl;
            break;
        default:
            cout << "Arithmetic Operation not supported." << endl;
    }
    char yesno;
    cout << "Do another (y/n)?";
    cin >> yesno;
    if (yesno == 'y') {
        goto interact;
    } else {
        exit(0);
    }

}
