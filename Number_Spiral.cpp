#include<bits/stdc++.h>
#define FOR(n)for(int i = 0; i < n; i++)
#define ll long long
using namespace std;


int main(){

 

    vector<vector<ll>>arr{
        {0,0,0,0,0,0}
        ,{0,1,2,9,10,25}
        ,{0,4,3,8,11,24}
        ,{0,5,6,7,12,23}
        ,{0,16,15,14,13,22}
        ,{0,17,18,19,20,21}
    };
    ll q;
    cin>>q;

    while(q--){
        ll row,col;
        cin>>row>>col;
        if(row<=arr.size() and col<=arr[0].size()){
        cout<<arr[row][col]<<endl;
        }
        
    }






}