#include <iostream>
using namespace std;

void sumArray(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    cout << sum << endl;
}

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
}

int searchElement(int a[], int n, int s)

{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == s)
        {
            return 1;
        }
    }
    return 0;
}
void reverseArray(int a[], int n)
{
    for (int i = n - 1, j = 0; i >= 0 && j < n ; i--, j++)
    {
        a[j] = a[i];
    }
    cout << endl;
    printArray(a, n);
}

int main()
{
    int first[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // sumArray(first, 10);
    // printArray(first, 10);
    // searchElement(first, 10, 7);
    // if (searchElement(first, 10, 15))
    // {
    //     cout << "haan it's  in an array ";
    // }
    // else
    // {
    //     cout << "Nahi aaray ke ander nahi hai";
    // }
    printArray(first, 10);
    cout << endl
         << "   " << endl;
    reverseArray(first, 10);
}