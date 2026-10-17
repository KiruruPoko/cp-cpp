#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

bool ispalindrome(ll x){
    string s = to_string(x);
    int l = 0, r = sz(s) - 1; 
    while (l < r) {
        if (s[l] != s[r]) return false; 
        l++; 
        r--;
    }
    return true; 
}
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    ll n; 
    cin >> n;
    ll mx_ans = 0; 
    for (ll i = 1; ; i++){
        if (i > 1000000) break; 
        ll cube = i * i * i; 
        if (cube > n) break; 
        if (ispalindrome(cube)) mx_ans = cube; 
    }
    cout << mx_ans << '\n';
}