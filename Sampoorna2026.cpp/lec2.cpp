#include<bits/stdc++.h>
#define FOR(n)for(int i = 0; i < n; i++)
#define ll long long

using namespace std;


int main(){


    int n,q;
    cin>>n>>q;

   char arr[n+1][n+1];
   memset(arr,0,sizeof(arr));
   for (int i = 1; i <=n; i++){
      for (int j = 1; j <=n; j++){
            cin>>arr[i][j];
      }
   }
   while(q--){
    int y1,y2,x1,x2;
    cin>>y1>>y2>>x1>>x2;
    int cnt=0;
    for (int i = y1; i <=x1; i++){
        for (int j= y2; j <=x2 ; j++){
            if(arr[i][j]=='*'){
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;

   }
   
}