#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

int MAX = 200000;
void solve(){
    int N; 
    cin >> N; 
    vector<int> c(MAX + 1);
    for (int i = 0; i < N; i++){    
        int a; 
        cin >> a; 
        c[a]++;
    }  
    ll ans = 0; 
    for (int q = 1; q <= MAX; q++){
        for (int r = 1; q * r <= MAX; r++){
            ans += (ll) c[q] * c[r] * c[q * r];
        }
    }
    cout << ans << '\n';
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