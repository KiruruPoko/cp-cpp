#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

void solve(){
    int n; cin >> n; 
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int g = 0; 
    int ans = 0;
    for (int i = 0; i < n; i++) g = gcd(g, a[i]);
    for (int i = 0; i < n; i++){
        a[i] /= g; 
        while (a[i] % 2 == 0){
            a[i] /= 2; 
            ans++; 
        }
        while (a[i] % 3 == 0){
            a[i] /= 3; 
            ans++;
        }
        if (a[i] != 1) {
            cout << -1 << '\n';
            return;
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