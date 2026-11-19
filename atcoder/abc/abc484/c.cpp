#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

void solve(){
    int n; 
    cin >> n; 
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        cin >> b[i];
    }
    int l = 0, r = n - 1; 
    while (l < n && a[l] == b[l]) l++; 
    while (r >= 0 && a[r] == b[r]) r--; 
    if (l == n){ 
        cout << "Yes" << '\n';
        return; 
    }
    bool left = (a[l] == b[r]);
    bool right = (a[r] == b[l]);
    for (int i = l; i < r; i++){
        if (a[i + 1] != b[i]) left = false; 
        if (a[i] != b[i + 1]) right = false;
    }
    if (left || right) cout << "Yes" << '\n';
    else cout << "No" << '\n';
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