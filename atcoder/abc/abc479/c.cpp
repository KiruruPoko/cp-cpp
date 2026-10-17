#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    ll n, w; 
    cin >> n >> w; 
    vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++){
        cin >> a[i] >> b[i];
    }
    ll ans = 0;
    for (int i = 0; i < (1 << n); i++){
        ll vol = 0, deli = 0; 
        for (int j = 0; j < n; j++){
            if (i & (1 << j)){
                vol += b[j];
                deli += a[j];
            }
        }
        if (vol <= w) ans = max(ans, deli);
    }
    cout << ans << '\n';
}