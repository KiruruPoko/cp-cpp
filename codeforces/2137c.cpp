#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int tt; 
    cin >> tt; 
    while (tt--){
        ll a, b; 
        cin >> a >> b;
        ll ans = -1e9; 
        if ((a % 2 == 0 && b % 2 != 0)) {
            cout << -1 << '\n'; continue; 
        }
        else { 
            if (b % 2 == 0) {
                a *= b / 2; b /= b / 2; 
                if ((a + b) % 2 == 0) ans = a + b; 
            }
            else {
                a *= b; b /= b; 
                if ((a + b) % 2 == 0) ans = a + b; 
            }
        }
        cout << (ans == -1e9? -1: ans) << '\n';
    }
}
