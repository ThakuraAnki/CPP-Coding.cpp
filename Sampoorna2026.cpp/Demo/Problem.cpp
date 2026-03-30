#include<bits/stdc++.h>
#define FOR(n)for(int i = 0; i < n; i++)
#define ll long long
using namespace std;


int main(){

    int n;
    cin>>n;

    vector<int>ans;
    ans.push_back(0);
    FOR(n-1){
        int data;cin>>data;
        ans.push_back(data);
    }

    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(ans[j]!=i and j<=n){
                cout<<j<<endl;
            }
        }
        
    }
    




}