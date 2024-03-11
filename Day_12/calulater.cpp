#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char c;
    cout << "Enter First Number: ";
    cin >> a;
    cout << "Enter Second Number: ";
    cin >> b;
    cout << "Enter Opretion do You want to do : ";
    cin >> c;

    switch (c)
    {
    case '+':
        cout << "This is An Addition of " << a << " " << b << ": " << a + b;
        break;
    case '-':
        cout << "This is An Subtraction of " << a << " " << b << ": " << a - b;
        break;
    case '*':
        cout << "This is An Multiplication of " << a << " " << b << ": " << a * b;
        break;
    case '/':
        cout << "This is An Division of " << a << " " << b << ": " << a / b;
        break;

    default:
        cout << "Please enter an valid Opreter";
        break;
    }
}