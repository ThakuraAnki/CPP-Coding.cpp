#include<bits/stdc++.h>
#define FOR(n)for(int i = 0; i < n; i++)
#define ll long long
using namespace std;


int main(){

    string a;
    cin>>a;

    int n=a.length();
    int cnt=0,maxLen=0;

    int j=0,k=0;
    string sans="";
    string good
    for(int i=0;i<n;i++){
        if(a[j]==a[k]){
            cnt++;
            sans+=a[j]+a[k];
            j--;
            k++;
            if(cnt>maxLen){

            }
            

        }

    }

}