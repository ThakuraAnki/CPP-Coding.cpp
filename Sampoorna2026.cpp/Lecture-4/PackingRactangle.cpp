#include<bits/stdc++.h>
#define FOR(n)for(int i = 0; i < n; i++)
#define ll long long
#define int long long

using namespace std;

bool f(int w,int h,int n,int m){

    int r=m/h;
    int c=m/w;

    return r>=ceil(n+(c-1))/c;


}

int32_t main(){

    int w,h,n;
    cin>>w>>h>>n;

    int s=max(w,h);
    int e=max(w,h)*n;

    int ans;
    while(s<=e){
        int m=s+(e-s)/2;
        if(f(w,h,n,m)){
            ans=m;
            e=m-1;
        }else{
            s=m+1;
        }
    }
    cout<<ans<<endl;




}