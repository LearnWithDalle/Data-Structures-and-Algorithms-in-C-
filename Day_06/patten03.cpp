#include <iostream>
using namespace std;

int main()
{
    /*
     *  *   *
     *  *
     *
     */
    int n;
    cout << "Enter the value of N: ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int space = 1;
        while (space <= i)
        {
            cout << " ";
            space = space + 1;
        }
        int j = i;
        while (j <= n)
        {
            cout << "X";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}