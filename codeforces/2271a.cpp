#include <bits/stdc++.h>
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
    while (tt--){
        int x, y; 
        cin >> x >> y; 
        if (y > x + 1) cout << -1 << '\n';
        else if (a % 2 == b % 2) cout << a << '\n';
        else cout << a + 1 << '\n';
    }
}