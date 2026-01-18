#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int amount;cin>>amount;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int dp[100];
   for(int i=0;i<=amount;i++){
    dp[i]=INT_MAX;
   }
    dp[0]=0;
    for (int i = 1; i <=amount; i++){
        int ans=INT_MAX;
        for(int k=0;k<n;k++){
            if(arr[k]<=i){
                int ci=i-arr[k];
                if(dp[ci]!=INT_MAX){
                    ans=min(ans,dp[ci]+1);
                }
            }
        }
        dp[i]=ans;
        
    }
    set<int>an;
    int cnt=0;
    cout<<dp[amount]<<endl;
   
   


    


}