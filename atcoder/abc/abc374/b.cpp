#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

void solve(){
    string s, t; cin >> s >> t; 
    if (s.length() > t.length()) swap(s, t);
    int a = min((int)s.length(), (int)t.length());
    for (int i = 0; i < a; i++){    
        if (s[i] != t[i]) {
            cout << i + 1 << '\n';
            return; 
        }
    }
    if (s.length() == t.length()) cout << 0 << '\n';
    else cout << s.length() + 1 << '\n';
}

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int tt = 1; 
    // cin >> tt;
    while (tt--){
        solve();
    }
}