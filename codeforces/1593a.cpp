#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int tt;
    cin >> tt; 
    while (tt--){ 
        ll a, b, c; 
        cin >> a >> b >> c; 
        ll mx = max({a, b, c});
        vector<ll> v = {a, b, c};
        ll ans[3];
        for (int i = 0; i < 3; i++){
            if (i == 0){
                if (v[0] == mx && v[0] != v[1] && v[0] != v[2]) ans[0] = 0; 
                else ans[0] = abs(v[0] - mx) + 1; 
            }
            if (i == 1){
               if (v[1] == mx && v[1] != v[0] && v[1] != v[2]) ans[1] = 0; 
                else ans[1] = abs(v[1] - mx) + 1;  
            }
            if (i == 2){
               if (v[2] == mx && v[2] != v[0] && v[2] != v[1]) ans[2] = 0; 
               else ans[2] = abs(v[2] - mx) + 1;  
            }
        }
        for (int i = 0; i < 3; i++) cout << ans[i] << ' ';
        cout << '\n';
    }
}
