#include<bits/stdc++.h>
#define FOR(n)for(int i = 0; i < n; i++)
#define ll long long
using namespace std;

int main(){


    int n,m;
    cin>>n>>m;


    int arr[n][m];
    for (int  i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
           cin>>arr[i][j];
        }
    }
cout<<endl;
    int sum=0;
    int ans[n][m];
     for (int  i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
           sum+=arr[i][j];
           ans[i][j]=sum;
        }
    }

     for (int  i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }


    




}