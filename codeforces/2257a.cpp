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
        int n, m; 
        cin >> n >> m;
        set<char> need;
        bool ok = true; 
        rep(i, n){
            string s; 
            cin >> s; 
            need.insert(toupper(s[0]));
        }
        rep(i, m){
            string ab; 
            cin >> ab; 
            for (char c: ab) {
                if (!need.count(c)) ok = false; // there is no action can be done here
            } 
        }
        cout << (ok? "YES": "NO") << '\n'; 
    }
}
