#include <bits/stdc++.h>
using namespace std; 
typedef long long ll; 
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int q;
    cin >> q; 
    map<ll, ll> m; 
    while (q--){
        int cmd; 
        cin >> cmd; 
        if (cmd == 0){
            ll k, v; 
            cin >> k >> v; 
            m[k] = v;
        }
        else if (cmd == 1){
            ll k; 
            cin >> k; 
            if (m.count(k)) cout << m[k] << '\n';
            else cout << 0 << "\n";
        }
    }
    return 0;    
}