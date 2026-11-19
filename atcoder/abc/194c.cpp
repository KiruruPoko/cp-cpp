#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

void solve(){
    int n; 
    cin >> n; 
    vector<int> cnt(401, 0);
    for (int i = 0; i < n; i++){
        int x; 
        cin >> x; 
        cnt[x + 200]++; 
    }
    ll ans = 0; 
    for (int i = -200; i <= 200; i++){
        for (int j = i + 1; j <= 200; j++){
            ans += 1LL * cnt[i + 200] * cnt[j + 200] * (i - j) * (i - j);
        }
    }
    cout << ans << '\n';

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