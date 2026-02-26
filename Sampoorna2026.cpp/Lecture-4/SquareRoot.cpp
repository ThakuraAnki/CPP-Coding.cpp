#include<bits/stdc++.h>
#define FOR(n)for(int i = 0; i < n; i++)
#define ll long long
using namespace std;


int main(){


    int n;
    cin>>n;

    int s=0;
    int e=n;

    int ans;

    while(s<=e){
        int m=s+(e-s)/2;
        if(m*m<=n){
            ans=m;
            s=m+1;
        }else{
            e=m-1;
        }
    }
    cout<<ans<<endl;

}