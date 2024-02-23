#include <iostream>
using namespace std;

int main()
{
    /*
Enter the Value of n: 5
1
2 3
4 5 6
7 8 9 10       
11 12 13 14 15
    */
    int n;
    cout << " Enter the Value of n: ";
    cin >> n;
    int i = 1;
    int start = i;
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
