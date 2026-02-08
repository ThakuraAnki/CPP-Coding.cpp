#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> t(n);
    for(int i = 0; i < n; i++) {
        cin >> t[i];
    }

    sort(t.begin(), t.end());

    long long currentTime = 0;
    int satisfied = 0;

    for(int i = 0; i < n; i++) {
        if(currentTime <= t[i]) {
            satisfied++;
            currentTime += t[i];
        }
    }

    cout << satisfied << endl;

    return 0;
}
