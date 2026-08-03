#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int n, m;  
    cin >> n >> m; 
    ll max_s = -1e9;
    vector<ll> a(n), b; 
    int cnt = 0;
    for (int i = 0; i < n; i++) { 
        cin >> a[i]; 
        max_s = max(max_s, a[i]); 
    }
    for (int j = 0; j < m; j++){
        int e;
        cin >> e; 
        if (e <= 2 * max_s) b.emplace_back(e); 
    }
    int idx = 0; 
    if (b.empty()) cout << cnt << '\n';
    else {
        sort(a.begin(), a.end());
        sort(b.begin(), b.end()); 
        for (int i = 0; i < n; i++){ 
            if (idx >= (int)b.size()) break; 
            if (b[idx] <= 2 * a[i]){
                cnt++; 
                idx++; 
            }
        }
        cout << cnt << '\n';
    }
}
