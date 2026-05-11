#include<bits/stdc++.h>
#define FOR(n)for(int i = 0; i < n; i++)
#define ll long long
using namespace std;


int main(){

    int n;
    cin>>n;

    int m;
    cin>>m;

    vector<int>nums1(n);
    vector<int>nums2(m);
    for(int i=0;i<n;i++){
        cin>>nums1[i];
    }
    for(int i=0;i<m;i++){
        cin>>nums2[i];
    }
    vector<int>freq(100,0);
    for(int x:nums1){
        if(freq[x]==0){
        freq[x]++;
        }
    }
    for(int x:nums2){
        

        freq[x]++;
        
    }

    vector<int>ans;
    for(int i=0;i<100;i++){
        if(freq[i]>=2){
            ans.push_back(i);
        }
    }
    for(int x:ans){
        cout<<x<<" ";
    }



}