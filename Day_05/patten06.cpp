#include <iostream>
using namespace std;

int main()
{
    /*
Enter the Value of n: 3
A B C 
B C D 
C D E 
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
    char start = 'A' + i + j - 2;
            cout << start << " ";
            start++;
            j++;
        }
        cout << endl;
        i++;
    }
}