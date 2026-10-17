#include <bits/stdc++.h>
#include <cassert> 
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int tt; 
    cin >> tt; 
    while (tt--) {
        ll k; 
        cin >> k; 
        for (int i = 1; i <= 100; i++){
            ll cur = k * i; 
            string st = to_string(cur);
            if (st.find("00") != string::npos){ 
                cout << cur << '\n';
                break;
            }
        }
    }
}