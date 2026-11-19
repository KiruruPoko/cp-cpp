#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

void solve(){
    string s; 
    cin >> s; 
    int n = s.length();
    if (s[n - 3] == 's' && s[n - 2] == 'a' && s[n - 1] == 'n') cout << "Yes" << '\n';
    else cout << "No" << '\n';
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