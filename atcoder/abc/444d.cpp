#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

vector<int> a(200005);
vector<int> sum(300000, 0);
void solve(){
    int n; 
    cin >> n; 
    int mx = 0; 
    for (int i = 0; i < n; i++){
        cin >> a[i];
        sum[a[i] - 1]++; 
        mx = max(mx, a[i] - 1);
    } 
    for (int i = mx; i > 0; --i) sum[i - 1] += sum[i];
    for (int i = 0; i <= mx; i++){
        sum[i + 1] += sum[i] / 10; 
        sum[i] %= 10;
        if (sum[i + 1] > 0) mx = max(mx, i + 1);
    }
    for (int i = mx; i >= 0; --i) cout << sum[i];
    cout << '\n';
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