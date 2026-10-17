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
    int n, q; 
    cin >> n >> q; 
    vector<ll> a(n);
    ll pref_sum = 0; 
    for (int i = 0; i < n; i++){
        cin >> a[i];
        pref_sum += a[i];
    }
    sort(all(a));
    ll median = n % 2 == 0? (a[n / 2 - 1] + a[n / 2]) / 2 : a[n / 2];
    while (q--){
        ll x; 
        cin >> x; 
        if (x < a[0] || x > a[n - 1]) cout << abs((x * n) - pref_sum) << '\n';
        else {
            ll cur = pref_sum;
            if (x <= median){
                for (int i = 0; i < n; i++){
                    if (a[i] >= x) break; 
                    cur += abs(a[i] - x) * 2; 
                }
            }
            else {
                for (int i = n - 1; i >= 0; --i){
                    if (a[i] <= x) break;
                    cur -= abs(a[i] - x) * 2; 
                }            
            }
            cout << abs((x * n) - cur) << '\n';
        }
    }
}