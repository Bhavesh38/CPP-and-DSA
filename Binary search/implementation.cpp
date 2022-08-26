#include <iostream>
using namespace std;
int binarySearch(int *arr, int n, int k)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == k)
        {
            return mid;
        }
        else if (arr[mid] > k) // left part
        {
            e = mid - 1;
        }
        else // right part
        {
            s = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    cout << binarySearch(arr, n, k);
    return 0;
}