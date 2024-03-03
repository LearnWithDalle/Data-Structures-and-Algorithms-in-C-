#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a value of n: ";
    cin >> n;
    int ans = 0;
    int a = 0;
    while (n != 0)
    {
        int number = n % 2;
        if (number == 1)
        {
            ans = (2 * a) + ans;
        }
        a++;
        n = n / 10;
    }
    cout << ans;
}
