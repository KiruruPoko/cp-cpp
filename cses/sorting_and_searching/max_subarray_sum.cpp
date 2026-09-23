#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    ll n; 
    cin>>n; 
    vector<ll> p(n + 1);
    for (int i=1; i<=n; i++) {
        ll x; 
        cin >> x; 
        p[i] = p[i - 1] + x;
    }       
    ll max_subarr_sum = p[1];
    ll min_pfx_sum = p[0];
    for (int i=1; i<=n; i++){
        max_subarr_sum = max(max_subarr_sum, p[i] - min_pfx_sum);
        min_pfx_sum = min(min_pfx_sum, p[i]);
    }
    cout << max_subarr_sum << '\n';

}
