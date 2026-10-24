#include <bits/stdc++.h>
using namespace std; 
typedef long long ll; 

int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    ll n, a, b; 
    cin >> n >> a >> b; 
    bool ans = false;
    vector<ll> d(2 * n);
    for (int i = 0; i < n; i++){
        cin >> d[i];
        d[i] %= (a + b);
        d[n + i] = d[i] + a + b;
    }
    sort(d.begin(), d.end());
    for (int i = 0; i < n; i++){
        int c = lower_bound(d.begin(), d.end(), d[i] + a) - d.begin();
        ans = ans || (c == n + i); 
    }
    cout << (ans? "Yes": "No") << '\n';
}