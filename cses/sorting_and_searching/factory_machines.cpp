#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    ll n, t; 
    cin >> n >> t; 
    vector<ll> k(n);
    ll mn = 2e9; 
    for (int i = 0; i < n; i++){
        cin >> k[i];
        mn = min(mn, k[i]);
    }
    ll l = 0, r = mn * t; 
    ll res = 0; 
    while (l <= r){
        ll mid = (l + r) / 2;
        ll sum = 0; 
        for (int i = 0; i < n; i++){
            sum += (mid / k[i]);
            if (sum >= t) break; 
        }
        if (sum >= t){
            res = mid; 
            r = mid - 1; 
        }
        else l = mid + 1; 
    }
    cout << res << '\n';    
}
