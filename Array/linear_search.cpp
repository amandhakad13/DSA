#include<iostream>
using namespace std;

int linearSearch(int arr[], int target, int size) {
    for(int i = 0; i <= size-1; i++) {
        if(arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {4,2,7,8,1,2,5};
    int target = 8, size = 7;

    int search = linearSearch(arr, target, size);
    if(search == -1) {
        cout<<"Target not found";
    }
    else {
        cout<<"Target index is : "<<search;
    }

    return 0;
} 
