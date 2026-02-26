#include<bits/stdc++.h>
#define FOR(n)for(int i = 0; i < n; i++)
#define ll long long
using namespace std;


int main(){

    int n,t;
    cin>>n,t;

    vector<int>arr;
    for (int i = 0; i < n; i++){
        int data;cin>>data;
        arr.push_back(data);
    }
    int cnt=0;
    ll miss=1;
    int idx=0;
    while (miss<=t){
   if (idx < n and arr[idx] <= miss){
        miss += arr[idx];
        idx++;
   }else{
        miss += miss;
        cnt++;
    }
}
cout<<endl;
    

  cout<<cnt<<endl;
    
    




    



}