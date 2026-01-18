#include<bits/stdc++.h>
using namespace std;
string ans="";
int LargestLCS(string a,int n,string b,int n2,int dp[100][100]){
    if(n==0 || n2==0){
        return 0;
    }
    if(dp[n][n2]!=-1){
        return dp[n][n2];
    }
    if(a[n-1]==b[n2-1]){
  
        ans+=a[n-1];
        return 1+LargestLCS(a,n-1,b,n2-1,dp);
        
    }else{
       int op1= LargestLCS(a,n-1,b,n2,dp);
        int op2=LargestLCS(a,n,b,n2-1,dp);
        return dp[n][n2]= max(op1,op2);
    }
}
int main(){

    string a;
    cin>>a;
    int n=a.length();
    string b;
    cin>>b;
    int n2=b.length();
    int dp[100][100];
    memset(dp,-1,sizeof(dp));
    LargestLCS(a,n,b,n2,dp);
    cout<<ans;
    
    
}