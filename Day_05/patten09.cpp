#include <iostream>
using namespace std;

int main()
{
    /*
    c
    b   c
    a   b   c
    */

    int n;
    cout << "Enter the Value of n: ";
    cin >> n;
    int i = 1;
    char start = 'A' + n - 1;
    while (i <= n)
    {
        char ok = start;
        int j = 1;
        while (j <= i)
        {
            cout << ok << " ";
            ok++;
            j++;
        }
        cout << endl;
        start--;
        i++;
    }
}