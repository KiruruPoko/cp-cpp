#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int tt; 
    cin >> tt; 
    while (tt--){
        ll n; 
        cin >> n; 
        ll k = sqrtl(n);
        ll ans = 0;
        for (ll h: {k, k + 1}){
            ans = max(ans, n - 1 + ((h - 1) * (n / h - 1)) + max(n % h - 1, 0LL));
        }
        cout << ans << '\n';
    }
}