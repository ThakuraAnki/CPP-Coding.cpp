#include<bits/stdc++.h>
#define FOR(n)for(int i = 0; i < n; i++)
#define ll long long
using namespace std;


int main(){

    int n,k;
    cin>>n>>k;

    int arr[n];

    FOR(n){
        cin>>arr[i];
    }
    int cnt=0;

    for (int i = 0; i <=n-k ; i++){
        int sum=0;
        for (int  j = 0; j < k; j++){
            sum+=arr[i+j];
            cnt++;

            if(sum==k){
                break;
            }
        }
        
    }
    cout<<cnt<<endl;
    



}