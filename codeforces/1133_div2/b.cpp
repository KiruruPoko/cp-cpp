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
    vector<ll> a(n);  
    vector<ll> ans;
    vector<ll> p(n);  
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(all(a)); 
    for (int i = n - k; i < n; i++){
        ans.push_back(a[i]);
    }
    for (int i = n - k - 1; i >= 0; --i){
        ans.push_back(a[i]);
    }
    for (int i = 0; i < n; i++){
        if (i == 0) p[i] = ans[i];
        else p[i] = ans[i] + p[i - 1];
    }
    int cnt = 1; 
    for (int i = 1; i < n; i++){
        if (ans[i] * i >= p[i - 1]) cnt++; 
    }
    // for (auto &u: ans) cout << u << " ";
    // cout << '\n';
    if (cnt != k) cout << "NO" << '\n';
    else {
        cout << "YES" << '\n';
        for (auto &u: ans) cout << u << " ";
        cout << '\n';
    }
}

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int tt; 
    cin >> tt;
    while (tt--){
        solve();
    }
}