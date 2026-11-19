#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

void solve(){
    int k; 
    cin >> k; 
    vector<int> a(k); 
    for (int i = 0; i < k; i++){
        cin >> a[i];
    }
    int mn = *min_element(all(a));
    int mx = *max_element(all(a));
    if (mx != 9) cout << -1 << '\n';
    else cout << mn << '\n';
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