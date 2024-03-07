#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    int n;
    cout << "Enter the Number of N: ";
    cin >> n;
    int ans = 0;
    if (n == 0)
    {
        cout << "N is 0 " << endl;
    }
    for (int i = 1; i < 29; i++)
    {
        int ok = pow(2, i);
        if (ok > n)
        {

            if (ok == n)
            {
                cout << "yes it's True";
                break;
            }
            else
            {
                cout << "no  it's not come in power of 2";
            }
            break;
        }
    }
}
