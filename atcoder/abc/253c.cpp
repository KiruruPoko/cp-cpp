#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

void solve(){
    int q; 
    cin >> q;   
    set<int> s;
    unordered_map<int, int> cnt; 
    while (q--){
        int op; 
        cin >> op; 
        if (op == 1){
            int x; 
            cin >> x; 
            if (cnt[x] == 0){
                s.insert(x);
            }
            cnt[x]++;
        }
        else if (op == 2){
            int x, c; 
            cin >> x >> c; 
            cnt[x] -= min(c, cnt[x]);
            if (cnt[x] == 0){
                s.erase(x);
            }
        }
        else {
            cout << *s.rbegin() - *s.begin() << '\n';
        }
    }   
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