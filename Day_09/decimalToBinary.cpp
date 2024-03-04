#include <iostream>
using namespace std;
int main()
{
    // Decimal to binary using divide by 2
    int n;
    cout << "Enter a value of n: ";
    cin >> n;
    int ans = 0;
    int i = 1;
    while (n != 0)
    {
        int reminder = n % 2;
        ans = (reminder * i) + ans;
        n /= 2;
        i = i * 10;
    }
    cout << ans;
}