#include<bits/stdc++.h>
#define FOR(n)for(int i = 0; i < n; i++)
#define ll long long
using namespace std;


int main(){
    int n;
    cin>>n;

    int arr[n];
    FOR(n){
        cin>>arr[i];
    }
    int s=0;
    int e=n-1;

    int maxLen=0;
     while(s<e){
        int width=e-s;
        int height=min(arr[s],arr[e]);
        maxLen=max(maxLen,width*height);
        if(arr[s]>arr[e]){
            e--;
        }else{
            s++;
        }
     }
     cout<<maxLen<<endl;

}