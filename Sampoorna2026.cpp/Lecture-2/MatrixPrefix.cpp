#include<bits/stdc++.h>
#define FOR(n)for(int i = 0; i < n; i++)
#define ll long long
using namespace std;


int main(){
     

     int n;
     cin>>n;

     int arr[n][n];
     FOR(n){
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
     }
     vector<vector<int>>psum(n,vector<int>(n));
     for (int i = 0; i < n; i++){
        for(int j=0;j<n;j++){
            psum[i][j]=arr[i][j];
            if(i>0)psum[i][j]+=psum[i-1][j];
            if(j>0)psum[i][j]+=psum[i][j-1];
            if(i>0 and j>0)psum[i][j]-=psum[i-1][j-1];
        }
     }
     FOR(n){
        for (int j = 0; j < n; j++)
        {
            cout<<psum[i][j]<<" ";
        }
        cout<<endl;
        
     }
     


}