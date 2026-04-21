#include<bits/stdc++.h>
#define FOR(n)for(int i = 1; i <=n; i++)
#define ll long long
using namespace std;


int main(){

    int n;
    cin>>n;
    if(n<=2){
        cout<<n;
    }
    else{
    int arr[n];
    int ans[n];
    ans[0]=0;
    FOR(n){
        cin>>ans[i];
    }
    arr[1]=1;
    arr[2]=2;
    int cnt=0;
    for(int i=3;i<=n;i++){
        arr[i]=arr[i-1]+arr[i-2];
        
        
    }
    for(int i=1;i<=n;i++){
        if(arr[i]==ans[i]){
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
    
    



}