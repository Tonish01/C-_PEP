#include <bits/stdc++.h>
using namespace std;
void selection(int arr[], int s)
{

    for (int i = 0; i < s-1; i++)
    {

        int minimum = i;

        for (int j = i + 1; j < s; j++)
        {
            if (arr[j] < arr[minimum])
            {
                minimum = j;
            }
            
        }
        if (minimum != i)
        {
            int temp = arr[i];
            arr[i] = arr[minimum];
            arr[minimum] = temp;
        }
    }
}

int main()
{
    int n = 6;
    int arr[6] = {7, 4, 10, 8, 3, 1};
    selection(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }

    return 0;
}