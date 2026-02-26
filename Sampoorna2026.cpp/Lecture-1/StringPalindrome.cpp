#include<bits/stdc++.h>
#define FOR(n)for(int i = 0; i < n; i++)
#define ll long long
using namespace std;


int main(){

    string a;
    cin>>a;

    int e=a.size();
    int s=0;
    bool ans=true;
    while(s<e){
        if(a[s]!=a[e]){
            ans=false;
            break;
        }
        s++;e--;
    }
    if(ans){
        cout<<"Yes It is";
    }else{
        cout<<"It is't";
    }
    cout<<endl;
    return 0;
}