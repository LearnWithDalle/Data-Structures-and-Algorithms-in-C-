#include <iostream>
using namespace std;

int findElement(int arr[], int n, int find)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == find)
        {
            ans = mid;
            return ans;
        }
        else if (arr[mid] < find)
        {
            start = mid + 1;
        }
        else if (arr[mid] > find)
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return ans;
}

void printArr(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int ans = findElement(arr, 8, 7);
    cout << 7 << " Element on Index: " << ans;
}