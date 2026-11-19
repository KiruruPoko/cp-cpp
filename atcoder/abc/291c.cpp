#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

map<pii, bool> visited;
void solve(){
    int n; 
    cin >> n; 
    string s; 
    cin >> s;   
    int x = 0, y = 0; 
    visited[make_pair(0, 0)] = true; 
    for (int i = 0; i < n; i++){
        if (s[i] == 'L') --x; 
        if (s[i] == 'R') ++x; 
        if (s[i] == 'D') --y; 
        if (s[i] == 'U') ++y; 
        if (visited[make_pair(x, y)]){
            cout << "Yes" << '\n';
            return; 
        }
        visited[make_pair(x, y)] = true; 
    }
    cout << "No" << '\n';
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