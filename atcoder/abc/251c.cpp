#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

void solve(){
    int n; cin >> n; 
    pii best = {-1, -1};
    map<string, int> m; 
    for (int i = 0; i < n; i++){
        string s; 
        int t;
        cin >> s >> t; 
        if (!m.count(s)) {
            m[s] = t; 
            if (t > best.first){
                best.first = t; 
                best.second = i + 1; 
            }
        }
    }
    cout << best.second << '\n';
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