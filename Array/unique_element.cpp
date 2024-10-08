#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vec = {1,2,2,3,3,4,4};
    
    int ans = 0;
    for(int value: vec) {
        ans = ans ^ value;
    }

    cout<<"Unique Value is : "<<ans;
}