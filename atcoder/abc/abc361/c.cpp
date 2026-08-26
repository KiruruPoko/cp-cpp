#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int n, k; 
    cin >> n >> k; 
    vector<ll> v(n);
    int del = 0; 
    ll ans = 1e18;
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    for (int i = 0; i < k + 1; i++){
        ans = min(v[i + n - k - 1] - v[i], ans);
    }
    cout << ans <<'\n';
}
