#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

using mint = atcoder::modint1000000007;

void solve(){
    int n, k; 
    cin >> n >> k; 
    mint ans = 0; 
    for (int i = k; i <= n + 1; i++){
        ans += mint(i) * (n - i + 1) + 1; 
    }
    cout << ans.val() << '\n';
}

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int tt = 1; 
    // cin >> tt;
    while (tt--){
        solve();
    }
}