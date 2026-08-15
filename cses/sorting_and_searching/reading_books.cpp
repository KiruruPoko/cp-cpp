#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    ll n; 
    cin >> n; 
    vector<ll> b(n); 
    for (ll i = 0; i < n; i++) cin >> b[i]; 
    sort(b.begin(), b.end());
    ll longest = b.back(); 
    ll sum = accumulate(b.begin(), b.end(), 0ll); 
    cout << max(sum, longest * 2) << '\n'; 
}
