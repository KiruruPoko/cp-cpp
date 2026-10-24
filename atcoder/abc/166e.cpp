#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
#define rep(i,n) for (ll i = 0; i < (n); i++)
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);
    map<ll, int> cnt; 
    ll ans = 0; 
    int n; 
    cin >> n;
    rep(i,n){
        ll a; 
        cin >> a; 
        ans += cnt[i - a];
        ++cnt[i + a];
    }
    cout << ans << '\n';
}  

