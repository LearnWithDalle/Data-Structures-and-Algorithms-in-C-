#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    while (i <= 5)
    {
        cout << i << " ";
        cout << endl;
        i = i + 1;
        i++;
    }
// int i = 1;
    for (int i = 1; i <= 5; i = i + 1)
    {
        cout << i << " ";
        cout << endl;
    }
}