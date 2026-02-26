#include<bits/stdc++.h>
#define FOR(n)for(int i = 0; i < n; i++)
#define ll long long
using namespace std;


int main(){

    int n;
    cin>>n;

    vector<int>arr(n);
    FOR(n){
        cin>>arr[i];
    }
    int n1;
    cin>>n1;

    vector<int>brr(n1);
    FOR(n1){
        cin>>brr[i];
    }
    
    vector<int>AnsArr;
    int id1=0;
    int id2=0;
   while(id1 < n && id2 < n1){
        if(arr[id1]>=brr[id2]){
            AnsArr.push_back(brr[id2++]);
        }else{
            AnsArr.push_back(arr[id1++]);
        }
    }
    
    while(id1<n){
            AnsArr.push_back(arr[id1++]);

    }
    while(id2<n1){
            AnsArr.push_back(arr[id2++]);

    }
    int total = AnsArr.size();
    double median;

    if(total % 2 == 1){
        median =AnsArr[total/2];
    } else {
        median =(AnsArr[total/2 - 1] + AnsArr[total/2]) / 2.0;
    }

    int ans=fixed << setprecision(4) << median;
    
}


