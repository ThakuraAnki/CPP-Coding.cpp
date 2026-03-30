#include<bits/stdc++.h>
#define FOR(n)for(int i = 0; i < n; i++)
#define ll long long
using namespace std;


int main(){


    float i,inc;
    int no,cp;

    cin>>no;

    i=0;
    inc=1;
    cp=0;
    while(cp<=5){
        while(i*i<=no){
            i=i+inc;
        }
        i=i-inc;
        inc=inc/10;
        cout<<inc<<endl;
        cp=cp+1;
    }
    cout<<i<<endl;
    
    

  






}