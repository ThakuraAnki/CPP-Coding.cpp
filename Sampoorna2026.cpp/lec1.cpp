#include<bits/stdc++.h>
using namespace std;


int main(){
    long long  n,m,k;
    cin>>n>>m>>k;

    vector<long long>arr(n);
    vector<long long >brr(m);

    for (long long  i = 0; i < n; i++){
        cin>>arr[i];
    }

    for (long long i = 0; i < m; i++){
        cin>>brr[i];
    }

    sort(arr.begin(),arr.end());
    sort(brr.begin(),brr.end());

    long long j=0;
    long long ans=0;
    for (long long i = 0; i < n and j<m; i++){
        if(arr[i]==brr[j] || brr[j]-k<=arr[i]||brr[j]+k>=arr[i]){
            ans++;
        }else{
            j++;
        }
    }
    cout<<ans<<endl;
    
    


}
