#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int n, k; 
    cin >> n;
    cin >> k; 
    vector<ll> a(n);
    int mx = 0; 
    unordered_map<ll, int> cnt; 
    set<int> cl;
    int ans = 0; 
    for (int i = 0; i < n; i++){
        int b; 
        cin >> b; 
        cnt[b]++;
        cl.insert(b);
        a.push_back(b);
        if (cnt[b] > mx) mx = cnt[b];
    } 
    for (auto &s: cl){
        if (cnt[s] >= mx - 1) ans++;
    }
    cout << ans << '\n';

}
