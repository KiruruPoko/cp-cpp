#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

void solve(){
    int x, y, z;
    cin >> x >> y >> z;
    if (x == max({x, y, z})){
        for (int i = 0; i < x + y + z; i++) cout << 'P';
    }
    else if (y == max({x, y, z})){
        for (int i = 0; i < x + y + z; i++) cout << 'R';
    }
    else {
        for (int i = 0; i < x + y + z; i++) cout << 'S';
    }
    cout << '\n';
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