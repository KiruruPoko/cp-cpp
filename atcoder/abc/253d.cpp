#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

void solve(){
    ll n, a, b; 
    cin >> n >> a >> b;     
    auto sum = [&](ll x){
        return x * (x + 1) / 2;
    };
    ll l = lcm(a, b);
    cout << sum(n) - sum(n / a) * a - sum(n / b) * b  + sum(n / l) * l << '\n';
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