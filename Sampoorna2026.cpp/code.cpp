#include<bits/stdc++.h>
#define FOR(n)for(int i = 0; i < n; i++)
#define ll long long
using namespace std;


int main(){

    int n;
    cin>>n;

    int k;
    cin>>k;
    string ans;
    cin>>ans;
   
    vector<int>frq(26,0);

    for (char i:ans)
    {
       int idx=i-'a';
       frq[idx]++;
    }
    
        for(int x:frq){
            if(x>k){
                cout<<"NO"<<endl;
                return 0;
            }
        }
        cout<<"YES"<<endl;
       
    
    
    











}