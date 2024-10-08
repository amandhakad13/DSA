#include<iostream>
#include <climits>
#include<vector>
using namespace std;

int main() {
    vector<int> vec = {1,2,3,4,5};
    int n = 5, sum = 0, max = INT_MIN;

    for(int val: vec) {
        sum = sum + val;
        if(sum > max) {
            max = sum;
        }
        if(sum < 0) {
            sum = 0;
        }
    }

    cout<<max;
    
}