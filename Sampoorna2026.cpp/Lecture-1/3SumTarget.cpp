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
    vector<vector<int>>ans;
    sort(arr,arr+n);
    for (int i = 0; i <= n-3; i++){

        if(i>0 and arr[i]==arr[i-1])continue;
        
        int t=-arr[i];
        int j=i+1;
        int k=n-1;

        while (j<k){
            
            int num=arr[j]+arr[k];
            if(num==t){
                ans.push_back({arr[i],arr[j],arr[k]});
                j++;
                k--;
                while(j<k and arr[j]==arr[j-1]){
                    j++;
                }
                while(j<k and arr[k]==arr[k+1]){
                    k--;
                }

            }else if(num>t){
            k--;
        }else{
            j++;
        }
    }
}

   for (int i = 0; i < ans.size(); i++) {
    for (auto y : ans[i]) {
        cout << y << " ";
    }
    cout << endl;
}

}