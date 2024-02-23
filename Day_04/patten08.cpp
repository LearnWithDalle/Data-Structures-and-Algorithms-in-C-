#include <iostream>
using namespace std;

int main()
{
    /*
Enter the Value of n: 5
 *  *  *  *  *
 *  *  *  *
 *  *  *
 *  *
 *
    */

    int n;
    cout << "Enter the Value of n: ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = i;
        while (j <= n)
        {
            cout << " * ";
            j++;
        }
        cout << endl;
        i++;
    }
}
