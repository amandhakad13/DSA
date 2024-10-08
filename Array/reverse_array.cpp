#include<iostream>
using namespace std;

void reverse(int arr[], int size) {
    int start = 0, end = size-1;

    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
     
}

int main() {
    int arr[] = {1,2,3,4,5,6,7};
    int size = 7;

    reverse(arr, size);
    
    for(int i = 0; i < size; i++) {
        cout<<arr[i]<<endl;
    }

}