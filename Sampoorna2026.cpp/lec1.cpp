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
    int j=0;
    int ans=0;

    for (int i = 0; i < n; i++)
    {
        if(arr[i]!=arr[i+1]){
                ans=max(ans,j+1);
                j=0;
        }else{
            j++;
        }

    }
    cout<<ans<<endl;
    





}