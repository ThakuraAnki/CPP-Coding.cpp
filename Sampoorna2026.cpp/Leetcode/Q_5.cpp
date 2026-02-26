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

    int n1;
    cin>>n1;

    vector<int>brr;

    FOR(n1){
        int data;
        cin>>data;
        brr.push_back(data);
    }

    int i,j;
    i=j=0;
    int e=n1-1;
    int cnt=0;
    int ans=0;
    
    while(i<n){
        int data=arr[i];

        if(data>0){
            
        while(j<n1){
            int divide=arr[i]*brr[j];
            j++;
            cnt++;
            if(cnt==k){
                ans=divide;
                break;
            }
        }
    }else{
       
        while(brr[e]>0){
            int divide=arr[i]*brr[e];
            cnt++;
            e--;
            if(cnt==k){
                ans=divide;
                break;
            }
        }
    }
i++;
j=0;
        

    }
    cout<<ans<<endl;






}