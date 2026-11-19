#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

void solve(){
    int n; 
    cin >> n; 
    vector<ll> a(n); 
    for (int i = 0; i < n; i++) cin >> a[i];
    ll A = 0, B = 0, C = 0; 
    sort(rall(a));
    // if (n == 2) {
    //     cout << (B + (ll)(pow(2,a[0]))) * (C + (ll)pow(2,a[1])) << '\n';
    //     return; 
    // }
    for (int i = 0; i < n; i++){
        if (B > C) C += (ll)pow(2, a[i]);
        else B += (ll)pow(2, a[i]);
    }
    cout << B * C << '\n';
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