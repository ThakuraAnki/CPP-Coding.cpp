#include<bits/stdc++.h>
using namespace std;


int main(){

    string a;
    string b;
    cin>>a>>b;
    int n=a.length();
    int m=a.length();

    int arr[100];
    for (int i = 0; i <n; i++)
    {
        arr[i]=0;
    }
    

    for (int i = 0; i < n; i++)
    {
        arr[i]++;
    }
    for (int  i = 0; i < m; i++)
    {
        arr[i]--;
    }

    bool ans=true;

    for (int i = 0; i < n; i++){
        if(arr[i]==0){
            ans=false;
            break;
        }else{
            ans=true;
        }
    }
    cout<<ans<
    


}