#include <bits/stdc++.h>
#include <cassert>
using namespace std; 
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, a, b; 
    cin >> n >> a >> b; 
    assert(b <= n);
    if ((b - a) % 2 == 0) cout << (b - a) / 2 << '\n';
    else cout << min(a - 1, n - b) + 1 + ((b - a - 1) / 2) << '\n'; 
}
