#include<bits/stdc++.h>
#define FOR(n)for(int i = 0; i < n; i++)
#define ll long long
using namespace std;


int main(){


    int n,k;
    cin>>n>>k;
     

     vector<int>arr;

     FOR(n){
        int data;
        cin>>data;
        arr.push_back(data);
     }


     int cnt=0;

     for (int i = 0; i < n; i++){
        int sum=0;
        for (int j= 0; j <= i; j++){
            sum+=arr[j];

            if(sum==k){
                cnt++;
            }
            
        }
        
     }
        cout<<cnt<<endl;

     









}