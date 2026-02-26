#include<bits/stdc++.h>
#define FOR(n)for(int i = 0; i < n; i++)
#define ll long long
using namespace std;


int main(){


    int n;
    cin>>n;
    
    int arr[n];
    vector<int>prfixSum(n);
    FOR(n){
        cin>>arr[i];
    }
    prfixSum[0]=arr[0];

    for (int i = 1; i < n; i++){
        prfixSum[i]=prfixSum[i-1]+arr[i];
    }
    int q;
    cin>>q;

    while(q--){
        int a,b;
        cin>>a>>b;
        a--;
        b--;
        int ans= a==0?b: prfixSum[b]-prfixSum[a-1];
        cout<<ans<<endl;
    }
    

}