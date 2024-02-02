#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int k)
{

    int low = 0;
    int high = n - 1;
    while (low < high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == k)
        {
            cout << "Position:  ";
            return mid + 1;
        }
        if (arr[mid] < k)
        {
            low = mid + 1;
        }
        if (arr[mid] > k)
        {
            high = mid;
        }
        if (low > high)
            break;
    }
    return -1;
}

int main()
{
    int n=10;
    // cout << "Size: ";
    // cin >> n;
    int arr[10]={5,9,13,23,25,45,59,63,71,89};
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    int k;
    cout << "Enter the element to be find: ";
    cin >> k;
    cout << BinarySearch(arr, n, k);

    return 0;
}