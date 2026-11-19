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
    vector<ll> A(n + 1), p(n + 1, 0);
    for (int i = 1; i <= n; i++){
        cin >> A[i]; 
        p[i] = p[i - 1] + A[i];
    }
    vector<ll> Lm(n + 2);
    vector<ll> LM(n + 2);
    vector<ll> Rm(n + 2);
    vector<ll> RM(n + 2);
    Lm[0] = LM[0] = 0; 
    for (int i = 0; i <= n; i++){
        Lm[i + 1] = min(Lm[i], p[i]);
        LM[i + 1] = max(LM[i], p[i]);
    }
    Rm[n] = RM[n] = p[n];
    for (int i = n - 1; i >= 0; --i){
        Rm[i] = min(Rm[i + 1], p[i]);
        RM[i] = max(RM[i + 1], p[i]);
    }
    ll ans = LM[n + 1] - Lm[n + 1];
    for (int i = 0; i < n; i++){
        ans = max(ans, max(LM[i + 1], RM[i + 1] - 2 * A[i + 1]) - min(Lm[i + 1], Rm[i + 1] - 2 * A[i + 1]));
    }
    cout << ans + 1 << '\n';
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