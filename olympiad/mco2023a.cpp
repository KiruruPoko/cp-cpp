// Malaysian Computing Olympiad 2023 A - Two Pointer (easy version)
#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

void solve(){
    ll n, a, b; 
    cin >> n >> a >> b; 
    vector<ll> t(n + 1, 0); 
    for (int i = 1; i <= n; i++){
        cin >> t[i];
    }
    if (a > b) swap(a, b);
    sort(t.begin() + 1, t.end());
    ll ans = 1e18;
    for (int i = 1; i + 1 <= n; i++){
        ll tot_dis = min(abs(a - t[1]), abs(a - t[i])) + t[i] - t[1]
        + min(abs(b - t[i + 1]), abs(b - t[n])) + t[n] - t[i + 1];
        ans = min(ans, tot_dis); 
    }
    ll a_all = min(abs(a - t[1]), abs(a - t[n])) + t[n] - t[1]; // a goes to all cities
    ll b_all = min(abs(b - t[1]), abs(b - t[n])) + t[n] - t[1]; // b goes to all cities
    ans = min({ans, a_all, b_all});
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int tt; 
    cin >> tt; 
    while (tt--){
        solve();
    }
}
