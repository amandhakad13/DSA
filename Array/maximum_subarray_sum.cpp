#include<iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5};
    int n = 5, max = INT_MIN;

    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = i; j < n; j++) {
            sum = sum + arr[j];
            if(sum > max) {
                max = sum;
            }
        }
    }

    cout<<max;
    return 0;
}