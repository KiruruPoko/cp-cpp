#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

void solve(){   
    int n, k; 
    cin >> n >> k; 
    vector<pii> block; 
    string s; 
    cin >> s; 
    int l = -1, r = -1; 
    k--; 
    for (int i = 0; i < n; i++){
        if (s[i] == '1' && l == -1){
            l = i; r = l; 
        }
        else if (l != -1 && s[i] == s[l] && i > l) r++; 
        if ((s[i] == '0' || i == n - 1) && l != -1 && r != -1){
            block.push_back({l, r});
            l = -1, r = -1;
        }
    }
    // for (auto [f, s]: block) cout << f << " " << s << '\n';
    int stop = block[k - 1].second; 
    for (int i = 0; i <= stop; i++){
        cout << s[i];
    }
    for (int i = 0; i <= block[k].second - block[k].first; i++) cout << '1';
    for (int i = stop + 1; i < n; i++){
        if (i >= block[k].first && i <= block[k].second) continue; 
        else cout << s[i];
    }
    cout << '\n';
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