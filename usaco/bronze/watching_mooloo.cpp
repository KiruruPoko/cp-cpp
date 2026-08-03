#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int n;
    ll k;    
    cin >> n;
    cin >> k; 
    vector<ll> d(n);
    for (int i = 0; i < n; i++){
        cin >> d[i]; 
    }
    ll ans = k + 1; 
    ll prev = d[0];
    for (auto &a: d){
        if (a - prev < k + 1) ans += a - prev;
        else ans += k + 1; 
        prev = a;
    }
    cout << ans << '\n';
}
