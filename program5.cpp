#include <iostream>
using namespace std;

int main()
{
    cout <<"Enter an operator(+,-,*,/): ";
    char op;
    cin >> op;

    cout << "Enter two numbers: ";
    double num1, num2;
    cin >> num1 >> num2;

    switch (op)
    {
        case '+':
        cout << "Adding " << num1 << " and " << num2 << " gives " << num1 + num2 << endl;
        break;
        case '-':
        cout << "Subtracting " << num1 << " and " << num2 << " gives " << num1 - num2 << endl;
        break;
        case '*':
        cout << "Multiplying " << num1 << " and " << num2 << " gives " << num1 * num2 << endl;
        break;
        default:
        cout << "Dividing " << num1 << " and " << num2 << " gives " << num1 / num2 << endl;
        break;
    }

    return 0;
}