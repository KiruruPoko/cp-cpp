#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int n, m, l; 
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++) cin >> a[i]; 
    cin >> m; 
    ll b[m];
    for (int i = 0; i < m; i++) cin >> b[i]; 
    cin >> l; 
    ll c[l];
    for (int i = 0; i < l; i++) cin >> c[i];
    unordered_set<ll> sum;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            for (int k = 0; k < l; k++){
                sum.insert(a[i] + b[j] + c[k]);
            }
        }
    }
    int q; 
    cin >> q; 
    while (q--){
        int x; 
        cin >> x; 
        cout << (sum.count(x)? "Yes": "No") << '\n'; 
    }
}
