#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "what do you want to do " << endl;
    cout << "" << endl;
    cout << "Find the number is 'Odd' or not press 1.. " << endl;
    cout << "Find the number is 'Even'  or not press 2.. " << endl;
    cout << "Find the number is 'Prime'  or not press 3.. " << endl;
    cout << "Print Fibhonachhi series till n press 4.." << endl;
    cout << "Print Table of n press 5.." << endl;
    cout << "" << endl;

    cin >> n;
    switch (n)
    {
    case 1:
    {
        int a;
        cout << " Enter the Number U want to Check are Odd or not..?" << endl;
        cin >> a;
        if (a % 2 == 1)
        {
            cout << a << " number is an Odd Number..";
        }
        else
        {
            cout << a << " number is not An Odd Number..";
        }
        break;
    }
    case 2:
    {
        int b;
        cout << " Enter the Number U want to Check are Even or not..?" << endl;
        cin >> b;
        if (b % 2 == 0)
        {
            cout << b << " number is an Even Number..";
        }
        else
        {
            cout << b << " number is not An Even Number..";
        }
        break;
    }

    case 3:
    {
        int c;
        cout << "Enter the Value of N: ";
        cin >> c;
        int x = 2;
        while (x <= c)
        {
            if (c % x == 0)
            {
                cout << "not prime for: " << c << endl;
            }
            x++;
        }
        cout << " prime Number: " << c << endl;
        break;
    }

    case 4:
    {
        int d;
        cout << "Enter Number till you want to print Fiboonachi : ";
        cin >> d;
        int first = 0;
        int second = 1;
        cout << first << endl;
        cout << second << endl;

        for (int i = 1; i <= d; i++)
        {
            int ans = first + second;
            cout << ans << endl;
            first = second;
            second = ans;
        }
        break;
    }

    case 5:
    {
        int e;
        cout << "Enter Number till you want Create a Table: ";
        cin >> e;
        for (int i = 1; i <= 10; i++)
        {
            cout << e << " X " << i << " = " << (e * i) << endl;
        }
        break;

    default:
        cout << "Please Enter a Valid number";
        break;
    }
    }
}