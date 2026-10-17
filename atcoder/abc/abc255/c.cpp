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
    ll x, a, d, n; 
    cin >> x >> a >> d >> n; 
    if (x < a) {
        cout << abs(x - a) << '\n';
        return 0; 
    }
    if (d == 0){
        cout << x - a << '\n';
        return 0; 
    }
    ll ideal_min = abs((x - a) / d);
    ll ideal_max = abs((x - a) / d) + 1; 
    if (ideal_min > n) cout << x - (max(a, a + d * (n - 1))) << '\n';
    else cout << min(abs(x - (a + d * ideal_min)), abs(x - (a + d * ideal_max))) << '\n';
    // cerr << ideal_min << '\n';
    // cerr << a + (d * (n - 1)) << '\n';
    // cerr << max(a, a + d * (n - 1)) << '\n';
    // cerr << a + d * ideal_min << '\n';
    // cerr << max(abs(x - (a + d * ideal_min)), abs(x - (a + d * ideal_max)));
}
// x < a then ans = x - a
// test a + d * ((x - a) / d) and a + d * ((x - a) / d + 1) and use closet
// if (x - a) / d > n use last element of n