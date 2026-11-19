#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

void solve(){
    int N, Q; 
    cin >> N >> Q; 
    vector<int> X(N);
    iota(all(X), 1);
    while (Q--){
        int k; 
        cin >> k; 
        for (int i = 0; i < k; i++){
            X[i] *= -1; 
        }
        reverse(X.begin(), X.begin() + k);
    }
    for (auto &a: X) cout << a << '\n';
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