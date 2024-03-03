#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a value of n: ";
    cin >> n;
    int ans = 0;
    int a = 1;
    if (n < 0)
    {
        n = -n;
        while (n != 0)
        {
            int bit = n & 1;
            ans = (bit * a) + ans;
            a *= 10;
            n = n >> 1;
        }
        ans = -ans;
        cout << ans;
    }
    else
    {
        while (n != 0)
        {
            int bit = n & 1;
            ans = (bit * a) + ans;
            a *= 10;
            n = n >> 1;
        }
        cout << ans;
    }
}