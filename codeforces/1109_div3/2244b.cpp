#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int tt; 
    cin >> tt; 
    while (tt--){
        int n; 
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        bool neat = true; 
        ll cur = 0; 
        for (ll i = 0; i < n; i++){
            cur += a[i];
            ll need = (i + 1) * (i + 2) / 2; 
            if (cur < need){
                neat = false; 
            }
        }
        cout << ((neat)? "YES": "NO") << '\n';
    }
}