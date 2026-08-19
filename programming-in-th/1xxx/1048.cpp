#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll k, n; 
    cin >> k >> n; 
    int64_t sum = 0; 
    for (ll i = 0; i < n; i++){
        sum += __builtin_popcountll(i ^ (i + 1));
    }
    cout << sum <<'\n';
    return 0;
}