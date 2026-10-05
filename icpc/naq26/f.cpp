#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size;
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int tt; 
    cin >> tt; 
    while (tt--){
        int n; 
        cin >> n; 
        vector<int> note(n);
        vector<bool> v(4, false);
        int ans = 0; 
        for (int i = 0; i < n; i++) {
            cin >> note[i];
            if (note[i] >= 1 && note[i] <= 10) v[0] = true; 
            else if (note[i] >= 11 && note[i] <= 20) v[1] = true; 
            else if (note[i] >= 21 && note[i] <= 30) v[2] = true; 
            else if (note[i] >= 31 && note[i] <= 40) v[3] = true; 
        }
        for (int i = 0; i < 4; i++) ans += (int)v[i];
        cout << ans << '\n';
    }
}