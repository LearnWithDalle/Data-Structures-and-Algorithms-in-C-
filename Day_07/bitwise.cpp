#include <iostream>
using namespace std;
int main()
{
    int i = 4;
    int j = 2;
    // int k = i & j;
    // int k = i | j;
    // int k = ~j;
    // int k = i ^ j;
    int k = (j << 2);
    cout << k;
    cout << endl;
     k = (j << 3);
    cout << k;
}