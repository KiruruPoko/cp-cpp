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
    if (n % 2 == 0) cout << (n / 2) * (n / 2) << '\n';
    else cout << (n / 2) * (n / 2 + 1) << '\n';
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