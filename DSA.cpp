#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<int>arr{1,3,4,4,55,5};
        int idx = lower_bound(arr.begin(), arr.end(),3) - arr.begin();
        cout<<idx<<endl;
}