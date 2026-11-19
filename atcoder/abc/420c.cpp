#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

void solve(){
    int N, q; 
    cin >> N >> q; 
    vector<ll> A(N), B(N), mn(N);
    ll sum = 0;
    for (int i = 0; i < N; i++) cin >> A[i];
    for (int i = 0; i < N; i++) {
        cin >> B[i];
        mn[i] = min(B[i], A[i]);
        sum += mn[i];
    }
    while (q--){
        char c; 
        int x, v; 
        cin >> c >> x >> v;
        --x;
        if (c == 'A'){
            sum -= mn[x];
            A[x] = v; 
            mn[x] = min(A[x], B[x]);
            sum += mn[x];
            cout << sum << '\n';
        }
        else {
            sum -= mn[x];
            B[x] = v; 
            mn[x] = min(A[x], B[x]);
            sum += mn[x];
            cout << sum << '\n';
        }
    }
    // cout << sum << '\n';
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