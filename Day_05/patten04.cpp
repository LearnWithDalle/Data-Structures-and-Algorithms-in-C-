#include <iostream>
using namespace std;

int main()
{

    /*
    Enter the Value of n: 5
A B C D E
A B C D E
A B C D E
A B C D E
A B C D E
    */
    int n;
    cout << "Enter the Value of n: ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
        char start = 'A' + j - 1;
            cout << start << " ";
            j++;
            start++;
        }
        cout << endl;
        i++;
    }
}