#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

void solve(){
    ll n, p, q, r;
    cin >> n >> p >> q >> r;
    ll cumu_sum = 0;  
    set<ll> s({0});
    for (int i = 0; i < n; i++){
        int a; 
        cin >> a; 
        cumu_sum += a; 
        s.insert(cumu_sum);
    }
    for (auto x: s){
        if (s.find(x + p) != s.end() && s.find(x + p + q) != s.end() && s.find(x + p + q + r) != s.end()){
            cout << "Yes" << '\n';
            return; 
        }
    }
    cout << "No" << '\n';
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