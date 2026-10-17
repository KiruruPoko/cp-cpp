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
    int tt; 
    cin >> tt; 
    while (tt--){
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        ll mn = a[0], mx = a[0];
        ll ans = a[0];
        for (int i = 1; i < n; i++){
            ll cur = a[i];
            ans = max(ans, cur + max(abs(mn), abs(mx)));
            mn = min({cur, cur + mn, cur + 2 * mn});
            mx = max({cur, cur + mx, cur + 2 * mx});
        }
        cout << ans << '\n';
    }
}
