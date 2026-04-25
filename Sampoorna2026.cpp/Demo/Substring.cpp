#include<bits/stdc++.h>
#define FOR(n)for(int i = 0; i < n; i++)
#define ll long long
using namespace std;

bool isPalindrome(string a){
    int s=0;
    int e=a.length()-1;
    while(s<e){
        if(a[s]!=a[e]){
            return false;
        }
        s++;
        e--;
    }
    return true;
}

int main(){


    string s;
    cin>>s;
    int n=s.length();
    int maxLen=0;
    string larAns;
    for(int i=0;i< n;i++){
        for(int j=i;j<n;j++){
            string anslen=s.substr(i,j - i + 1);
            int cnt = anslen.length();
            if(cnt> maxLen){
                if(isPalindrome(anslen)){
                    larAns=anslen;
                    maxLen=cnt;
                }

            }

        }
    }
    cout<<larAns;



}