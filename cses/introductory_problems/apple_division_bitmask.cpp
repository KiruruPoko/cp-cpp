#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
const double pi = 3.141592653589793;
const ll MOD = 1e9 + 7; 
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int n;
    cin >> n;
    vector<ll> weights(n);
    for (int i = 0; i < n; i++) cin >> weights[i];
    ll ans = INT64_MAX;
    for (int mask = 0; mask < (1 << n); mask++){
        ll sum1 = 0;
        ll sum2 = 0; 
        for (int i = 0; i < n; i++){
            if (mask & (1 << i)){
                sum1 += weights[i];
            }
            else {
                sum2 += weights[i];
            }
        }
        ans = min(ans, abs(sum1 - sum2)); // recursion basecase
    }
    cout << ans << '\n';
    return 0;
}
