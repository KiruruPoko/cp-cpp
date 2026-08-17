#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
using pll = pair<ll, ll>;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; 
    cin >> n;
    vector<pll> v; 
    for (int i = 0; i < n; i++) {
        ll h, l; 
        cin >> h >> l; 
        while (!v.empty() && v.back().first <= h) v.pop_back(); // discard smaller takahashi
        v.emplace_back(h, l); 
    }
    int q; 
    cin >> q;
    while (q--){
        int t; 
        cin >> t; 
        cout << ranges::upper_bound(v, t, {}, &pll::second) -> first << '\n';
    } 
    return 0;
}