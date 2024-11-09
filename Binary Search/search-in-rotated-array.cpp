#include <iostream>
using namespace std;

int main()
{
    int n, index, f = 0;
    cout << "Enter the size of array : ";
    cin >> n;

    int arr[100], start = 0, end = n - 1, mid;
    cout << "Enter the elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the key : ";
    cin >> key;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            index = mid;
            f = 1;
            break;
        }
        else if (arr[mid] >= arr[0])
        {
            if (arr[start] <= key && arr[mid] >= key)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        {
            if (arr[mid] <= key && arr[end] >= key)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    if (f == 0)
    {
        cout << "-1";
    }
    else
    {
        cout << index;
    }
}