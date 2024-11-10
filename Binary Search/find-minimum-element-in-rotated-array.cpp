#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    int arr[100], start = 0, end = n - 1, mid;
    cout << "Enter the elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int result = arr[0];
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            result = arr[mid];
            end = mid - 1;
        }
    }

    cout << result;
}