#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int n; 
    cin >> n; 
    vector<ll> v(n); 
    ll sum = 0;
    ll med; 
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    // for (auto &a: v) cout << a << " ";
    // cout << '\n';
    if (n % 2 == 0){ 
        med = (v[(n / 2) - 1] + v[(n / 2)])/ 2;
    }
    else med = v[((n + 1) / 2) - 1]; 
    // cout << "Median: " << med << '\n'; 
    for (int i = 0; i < n; i++){
        sum += abs(v[i] - med); 
    }
    cout << sum << '\n'; 
}
