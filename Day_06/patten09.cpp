#include <iostream>
using namespace std;

int main()
{
    /*
Enter the value of N: 5
1234554321
1234XX4321
123XXXX321
12XXXXXX21
1XXXXXXXX1
     */
    int n;
    cout << "Enter the value of N: ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n - i + 1)
        {
            cout << j;
            j++;
        }
        if (i > 1 && i <= n)
        {
            int star = 2 * (i - 1);
            int k = 0;
            while (k < star)
            {
                cout << "X";
                k++;
            }
        }
        int l = n - i + 1;
        while (l >= 1)
        {
            cout << l;
            l--;
        }

        cout << endl;
        i++;
    }
}