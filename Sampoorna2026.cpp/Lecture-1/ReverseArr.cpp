#include<bits/stdc++.h>
#define FOR(n)for(int i = 0; i < n; i++)
#define ll long long
using namespace std;


int main(){


    int n;
    cin>>n;

    int arr[n];
    FOR(n){
        cin>>arr[i];
    }

    int s=0;
    int e=n-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }

    FOR(n){
        cout<<arr[i]<<" ";
    }
}