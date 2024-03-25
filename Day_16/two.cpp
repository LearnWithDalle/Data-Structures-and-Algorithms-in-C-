#include <iostream>
using namespace std;

void printarr(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << " ";
    }
}

void mordanway(int arr[], int n)
{
    int ok = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        ok = ok ^ arr[i];
    }
    cout << "ans is: " << ok;
}

void findUnique(int arr[], int n)
{
    int temp = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            if (arr[i] == arr[j])
            {
                temp++;
            }
        }
        if (temp == 1)
        {
            cout << "the unique element is: " << arr[i];
            break;
        }
        temp = 0;
    }
}

int main()
{
    int arr[7] = {1, 2, 6, 9, 1, 6, 9};
    printarr(arr, 7);
    cout << " " << endl;
    // findUnique(arr, 7);
    mordanway(arr, 7);
}