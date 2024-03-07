#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Number of N: ";
    cin >> n;

    int temp = n;
    int rev = 0;
    while (temp != 0)
    {
        int digit;
        digit = temp % 10;
        rev = (rev * 10) + digit;
        temp /= 10;
    }
    cout << "After Update the N value: " << rev << endl;
}