#include<bits/stdc++.h>
#define FOR(n)for(int i = 0; i < n; i++)
#define ll long long
using namespace std;


int main(){


	
int n;
cin>>n;

vector<int>arr;

FOR(n){
	int data;
	cin>>data;
	arr.push_back(data);
}
sort(arr.begin(),arr.end());

ll median =arr[n/2];
ll cost=0;
FOR(n){
	cost+=abs(arr[i]-median);
}
cout<<cost<<endl;





}