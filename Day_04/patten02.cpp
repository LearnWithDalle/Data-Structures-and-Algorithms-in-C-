#include <iostream>
using namespace std;

int main()
{
    /*
    Patten 2:
    *  *  *  *
    *  *  *  *
    *  *  *  *
    *  *  *  *
    */
    int n = 4;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << " * ";
            j++;
        }
        cout << endl;

        i++;
    }
}