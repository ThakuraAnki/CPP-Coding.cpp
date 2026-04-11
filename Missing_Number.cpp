#include<bits/stdc++.h>
#define FOR(n)for(int i = 0; i < n; i++)
#define ll long long
using namespace std;


int main(){

    int n;
    cin>>n;

    vector<int>arr;
    FOR(n-1){
        int data;
        cin>>data;
        arr.push_back(data);
    }


    vector<int>freq(n+1,0);
    for (int i = 0; i < n-1; i++){
        freq[arr[i]]++;
    }
    for(int i=1;i<=n;i++){
        if(freq[i]==0){
            cout<<i<<endl;
        }
    }
    






}