#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, t;
    cin >> n >> t;

    vector<long long> arr(n);
    for (long long i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    long long i = 0, j = n - 1;
    long long bogi = 0;

    while (i <= j) {
        if (arr[i] + arr[j] <= t) {
            i++;   
            j--;   
        } else{
            j--;  
        }
        bogi++;
    }

    cout << bogi << endl;
    return 0;
}
