#include<bits/stdc++.h>
#define FOR(n)for(int i = 0; i < n; i++)
#define ll long long
using namespace std;


int main(){

    int n,t;
    cin>>n>>t;

    int arr[n];
    FOR(n){
        cin>>arr[i];
    }
    int s=0;
    int e=n-1;
    
    while (s<e){
        if(arr[s]+arr[e]==t){
            cout<<s<<" "<<e<<endl;
            s++;
            e--;
        }else if(arr[s]>arr[e]){
            s++;
        }else{
            e--;
        }
    }
    

}