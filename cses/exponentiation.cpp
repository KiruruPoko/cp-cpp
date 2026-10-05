#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size;
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;
const int MOD = 1e9 + 7;

int modpow(int x, int n, int m) {
    if (n == 0) return 1 % m;
    long long u = modpow(x, n / 2, m);
    u = (u * u) % m;
    if (n % 2 == 1) u = (u * x) % m;
    return u;
}
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int tt; 
    cin >> tt; 
    while (tt--){
        int a, b; 
        cin >> a >> b;
        cout << modpow(a, b, MOD) << '\n';
    }

}