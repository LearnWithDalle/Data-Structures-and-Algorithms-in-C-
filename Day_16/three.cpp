#include <iostream>
#include <vector>

using namespace std;

void printarr(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << " ";
    }
}

void duplicate(int arr1[], int arr2[], int n, int m)
{
    vector<int> ans;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    for (int k = 0; k < ans.size(); k++)
    {
        cout << ans[k] << " ";
    }
}

int main()
{
    int n = 11;
    int m = 7;
    int arr1[n] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 13};
    int arr2[m] = {1, 3, 9, 10, 11, 12, 13};
    duplicate(arr1, arr2, n, m);
}