#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

void solve(){
    int n, m; 
    cin >> n >> m; 
    multiset<ll> a; 
    vector<ll> b(m); 
    for (int i = 0; i < n; i++){
        int x; 
        cin >> x; 
        a.insert(x);
    }
    for (int i = 0; i < m; i++) cin >> b[i];
    ll sum = 0; 
    for (int i = 0; i < m; i++){
        auto it = a.lower_bound(b[i]);
        if (it != a.end()){
            sum += *it; 
            a.erase(a.find(*it));
        }
        else {
            cout << -1 << '\n'; 
            return; 
        }
    }
    cout << sum << '\n';
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