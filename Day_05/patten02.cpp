#include <iostream>
using namespace std;

int main()
{
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
            cout << (i - j + 1) << " ";
            start--;
            j++;
        }
        cout << endl;
        i++;
    }
}
