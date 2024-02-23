#include <iostream>
using namespace std;

int main()
{
    /*
Enter the Value of n: 5
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
    */
    int n;
    cout << "Enter the Value of n: ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << i << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}
