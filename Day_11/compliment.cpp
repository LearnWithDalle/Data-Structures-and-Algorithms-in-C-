#include <iostream>

using namespace std;
int main()
{
    int n;
    cout << "Enter the Number of N: ";
    cin >> n;
    int temp = n;
    int ok = 0;
    while (temp != 0)
    {
        ok = (ok << 1) | 1;
        temp = temp >> 1;
    }
    int ans = (~n) & ok;
    cout << endl;
    cout << "Ans is : " << ans;
}