#include <iostream>
using namespace std;

int main()
{
    /*
    Enter the Value of n: 5
A   
B C 
D E F
G H I J
K L M N O 
    */

    int n;
    cout << "Enter the Value of n: ";
    cin >> n;
    int i = 1;
    char start = 'A';
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << start << " ";
            start++;
            j++;
        }
        cout << endl;
        i++;
    }
}