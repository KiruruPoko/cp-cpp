#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

vector<int> k(25);
int N; 
int ans = 2e9 + 7; 
void group(int i, int a, int b){
    if (i == N) {
        ans = min(max(a, b), ans); 
        return; 
    }
    group(i + 1, a + k[i], b);
    group(i + 1, a, b + k[i]);
}
void solve(){
    cin >> N; 
    for (int i = 0; i < N; i++) cin >> k[i];
    group(0, 0, 0);
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