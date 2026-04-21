#include<bits/stdc++.h>
#define FOR(n)for(int i = 0; i < n; i++)
#define ll long long
using namespace std;


int main(){
map<int, int> m;

for (int i = 0; i < 10; ++i) m[i] = i;

for (auto &it : m) {
	cout << "Current Key: " << it.first << endl;

	m.erase(it.first);
}
}