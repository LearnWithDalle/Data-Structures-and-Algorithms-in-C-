#include <iostream>
using namespace std;

int main()
{

    /*
    Enter the Value of n: 3
    A A A
    B B B
    C C C
    */
    int n;
    cout << "Enter the Value of n: ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        char start = 'A' + i - 1;
        int j = 1;
        while (j <= n)
        {
            cout << start << " ";
            j++;
        }
        start++;
        cout << endl;
        i++;
    }
}