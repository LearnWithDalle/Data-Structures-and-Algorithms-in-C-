#include <iostream>
using namespace std;
int main()
{
    /*
    // 1 to 10
    int a = 1;
    while (a <= 10)
    {
        cout << a << '\n'
             << endl;
        a = a + 1;
    }
    */
    /*
    // prit 1 to n
    int n;
    cout << "Enter the Value of N: ";
    cin >> n;
     int a = 1;
     while (a <= n)
     {
         cout << a << '\n'
              << endl;
         a = a + 1;
     }
    */

    // sum of 1 to n
    // int n;
    // cout << "Enter the Value of N: ";
    // cin >> n;
    // int a = 1;
    // int sum = 0;
    // while (a <= n)
    // {
    //     // cout << a << '\n'
    //     //      << endl;

    //     sum = sum + a;
    //     a = a + 1;
    // }
    // cout << sum;

    // // print only even No
    // int n;
    // cout << "Enter the Value of N: ";
    // cin >> n;
    // int a = 1;
    // while (a <= n)
    // {
    //     if (a % 2 == 0)
    //     {
    //         cout << a << endl;
    //     }
    //     a = a + 1;
    // }

    // print only Prime No
    int n;
    cout << "Enter the Value of N: ";
    cin >> n;
    int a = 2;
    while (a <= n)
    {
        if (n % a == 0)
        {
            cout << "not prime: " << a << endl;
        }
        a = a + 1;
    }
}

/*
*
**
***
****
*****
*/