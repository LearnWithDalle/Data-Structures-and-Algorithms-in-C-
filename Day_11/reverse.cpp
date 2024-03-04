#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " Enter the number which u Want to reverse: ";
    cin >> n;
    int temp = n;
    int rev = 0;
    while (temp != 0)
    {
        int number = temp % 10;
        rev = (rev * 10) + number;
        temp /= 10;
    }
    cout << rev;
}