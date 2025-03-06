#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5};
    int largest = -1;

    for(int i = 0; i < 5; i++) {
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
        
    int secondLargest = -1;
    for(int i = 0;i < 5; i++) {
        if(arr[i] != largest) {
            if(arr[i] > secondLargest){
                secondLargest = arr[i];
            }
        }
    }
        
    cout<<secondLargest;
}