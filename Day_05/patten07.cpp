#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the Value of n: ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        /*
Enter the Value of n: 3
A
B B
C C C
        */
        int j = 1;
        char start = 'A' + i - 1;
        while (j <= i)
        {
            cout << start << " ";
            j++;
        }
        start++;
        cout << endl;
        i++;
    }
}