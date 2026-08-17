#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
#define rep(i,n) for (ll i = 0; i < (n); i++)
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);
    int tt; 
    cin >> tt;
    while (tt--){
        ll k; 
        cin >> k;
        rep(i, 100){
            ll prod = k * (i + 1); 
            string st = to_string(prod);
            if (st.find("00") != string::npos){
                cout << prod << '\n';
                break; 
            }
        }
    }
}
