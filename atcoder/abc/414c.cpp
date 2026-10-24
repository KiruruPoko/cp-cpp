#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
#define rep(i,n) for (ll i = 0; i < (n); i++)
bool ispalindrome(ll x, ll b){
    ll orig = x; 
    ll rev = 0; 
    while (x > 0){
        rev = rev * b + x % b; 
        x /= b;  
    }
    return orig == rev; 
}
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);
    ll a,n; 
    cin >> a >> n; 
    ll ans=0; 
    rep(i, 999999){
        string s = to_string(i + 1);
        string rev = s; 
        reverse(rev.begin(), rev.end()); 
        ll x = stoll(s+rev); // even len palindrome (e.g. 123321)
        if (x <= n && ispalindrome(x, a)) ans += x; 
        ll y = stoll(s + rev.substr(1)); // odd len palindrome (e.g 12321)
        if (y <= n && ispalindrome(y, a)) ans += y; 
    }
    cout<<ans<<'\n'; 
}
// code reference: (atcoder) hirayuu_at
