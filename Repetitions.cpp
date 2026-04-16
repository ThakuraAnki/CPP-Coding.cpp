#include<bits/stdc++.h>
#define FOR(n)for(int i = 0; i < n; i++)
#define ll long long
using namespace std;


int main(){
    string s;
    cin>>s;
    
    int ans =;
    int cnt=1;
    char chk=s[0];

    for (int i = 1; i <s.size(); i++){
            if(chk==s[i]){
                cnt++;
                ans=max(ans,cnt);
            }else{
                cnt=1;
                chk=s[i];
            }
    
    }
    cout<<ans<<endl;
    
}