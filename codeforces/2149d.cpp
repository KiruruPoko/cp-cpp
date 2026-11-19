#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

void solve(){
    int n; 
    cin >> n; 
    string s; 
    cin >> s; 
    int ab = 0; 
    int ba = 0; 
    for (int i = 0; i < n - 1; i++){
        if (s[i] == 'b' && s[i + 1] == 'a') ba++; 
        else if (s[i] == 'a' && s[i + 1] == 'b') ab++;
    }
    cout << max(max(ab, ba) - 1, 0) << '\n';
}

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int tt; 
    cin >> tt;
    while (tt--){
        solve();
    }
}