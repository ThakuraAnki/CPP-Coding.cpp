#include<bits/stdc++.h>
using namespace std;

int CoinExchange(int *arr,int n,int t){
  if(t==0){
    return 0;
  }
  int ans=INT_MAX;
  for (int i = 0; i < n; i++)
  {
    if(t-arr[i]>=t){
      int SmallAns=CoinExchange(arr,n,t);
      if(SmallAns!=INT_MAX){
        ans=min(ans,SmallAns+1);
      }
    }
  }
  return ans;
  
}

int main(){

  int n;
  cin>>n;

  int t;
  cin>>t;

  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int ans=CoinExchange(arr,n,t);
  cout<<ans<<end

}