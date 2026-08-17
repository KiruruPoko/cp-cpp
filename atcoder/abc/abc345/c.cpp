#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    ll n, ans = 0;
    vector<ll> cnt(26); // count freq of letter
    bool same = false; 
    string s;
    cin >> s;  
    n = s.size();
    for (int i = 0; i < n; i++){
        cnt[((int)(s[i] - 'a'))]++; 
    }
    ans = n * n; 
    for (int i = 0; i < 26; i++){
        ans -= cnt[i] * cnt[i]; 
        if (cnt[i] > 1) same = true; 
    }
    ans /= 2; 
    if (same) ans++; 
    cout << ans << '\n'; 
}
