#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    ll n; 
    cin>>n; 
    vector<ll> v(n + 1);
    for (int i=1; i<=n; i++){
        cin >> v[i];
    }
    ll current_sum = v[0];
    ll best_sum = -1e18;
    for (int i=1; i <= n; i++){
        // if v[i] > current_sum + v[i] => restart new subarray else continue adding into the subarray
        current_sum = max(v[i], current_sum + v[i]);
        best_sum = max(best_sum, current_sum);
    }
    cout << best_sum << '\n';
}
