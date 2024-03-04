#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter Binary Number: ";
    cin >> n;
    int i = 0;
    int ans = 0;
    while (n != 0)
    {
        int number = n % 10;
        if (number == 1)
        {
            ans = (pow(2, i) + ans);
        }
        n /= 10;
        i++;
    }
    cout <<" Ans is : " << ans;
}