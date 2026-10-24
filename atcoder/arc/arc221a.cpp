#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
const int MOD = 998244353;
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int t; 
    cin >> t;
    while (t--){
        int n, a, b, c, d; 
        cin >> n >> a >> b >> c >> d;
        ll ans = 0; 
        for (int i = 1; i <= n; i++){
            ans += __gcd((a * i + b), (c * i + d)); 
        }
        cout << ans % MOD << '\n';
    }
    return 0;
}
