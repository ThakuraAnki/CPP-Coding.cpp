#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,t;
    cin>>n>>t;

    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    
    sort(arr,arr+n);
    int s=0;
    int e=n;
    int TotalGondola=0;
    int carry=0;

    while (s<e)
    {
        int sum=arr[s]+arr[e];
        if(sum>=t){
            TotalGondola++;
            carry=sum-t;
            s++;
            e--;
        }else{
            if(carry+sum>=t){
                TotalGondola++;
                s++;
            }
            if(carry+sum<t){
                TotalGondola++;
                e--;
            }
        }

    }
    if(carry>0 and carry<50){
        TotalGondola++;
        carry-=2;
    }
    cout<<TotalGondola<<endl;
}