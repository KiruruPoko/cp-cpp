#include <bits/stdc++.h>
using namespace std; 
typedef long long ll; 

int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int n;
    cin >> n; 
    vector<ll> a(n), v(n);
    ll p[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
        v[i] = a[i];
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++){
        if (i == 0) p[0] = v[0];
        else p[i] = v[i] + p[i - 1]; // prefix sum
    }
    for (int i = 0; i < n; i++){ // find index upper bound then use it to subtract from total sum
        auto ub = upper_bound(v.begin(), v.end(), a[i]);
        int id_t = ub - v.begin();
        if (id_t == n) cout << 0 << " ";
        else if (id_t == 0) cout << p[n - 1] - p[id_t] << " ";
        else cout << p[n - 1] - p[id_t - 1] << " ";
    }
    return 0;
}