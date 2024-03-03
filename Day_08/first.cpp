#include <iostream>
using namespace std;
int main()
{

    // While loop
    /*
    int i = 1;
    while (i <= 5)
    {
        cout << i << endl;
        i++;
    }
*/
    // For loop
    /*
    int i = 1;
    for (;;)
    {
        if (i <= 5)
        {
            cout << i << endl;
            i++;
        }
        else
        {
            break;
        }
    }
    */
    //    5 table
    // for (int i = 1; i <= 10; i++)
    // {
    //     cout << "5"
    //          << " X " << i << " = " << (5 * i) << endl;
    //     ;
    // }
    /*
    5 X 1 = 5
    5 X 2 = 10*/

    // For odd
    // for (int i = 1; i <= 10; i++)
    // {
    //     if (i % 2 == 1)
    //     {
    //         cout << i << endl;
    //     }
    // }

    // For sum
    // int sum = 0;
    // for (int i = 1; i <= 10; i++)
    // {
    //     sum = sum + i;
    // }
    // cout << sum;

    // For Prime
    // int n;
    // cout << "N : ";
    // bool isPrime = 1;
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         isPrime = 0;
    //         break;
    //     }
    // }
    // if (isPrime == 0)
    // {
    //     cout << n << " is not a Prime Number" << endl;
    // }
    // else
    // {
    //     cout << n << "is a Prime Number" << endl;
    // }

    // For Fibhonacchi
    int n;
    cout << "N : ";
    cin >> n;
    int a = 0;
    int b = 1;
    cout << a << endl;
    cout << b << endl;

    for (int i = 1; i <= n; i++)
    {
        int c = a + b;
        cout << c << endl;
        a = b;
        b = c;
    }
}