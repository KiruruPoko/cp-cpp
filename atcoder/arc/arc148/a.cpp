#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
#define rep(i,n) for (ll i = 0; i < (n); i++)
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);
    int n; 
    cin >> n; 
    vector<int> a(n); 
    for (auto &v: a) cin >> v;
    int ans = 2; 
    int g = 0; 
    rep(i, n - 1){
        g = __gcd(g, abs(a[i] - a[i + 1]));
    }
    cout << (g == 1? 2 : 1) << '\n';
}
