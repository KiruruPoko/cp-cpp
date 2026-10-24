#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
#define rep(i,n) for (ll i = 0; i < (n); i++)
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);
    int n; 
    cin >> n; 
    map<int, int> cnt; 
    ll ans; 
    rep(i, n){
        int a;
        cin >> a; 
        ans += cnt[i - a];
        cnt[i + a]++; 
    }
    cout << ans << '\n'; 
}
