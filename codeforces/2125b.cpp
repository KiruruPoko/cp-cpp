#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int tt; 
    cin >> tt; 
    while (tt--){
        ll a, b, k; 
        cin>>a>>b>>k;
        int ans; 
        if (k >= a && k >= b) ans = 1; 
        else if (__gcd(a, b) != 1){
            ll g = __gcd(a, b); 
            if (a / g <= k && b / g <= k) ans = 1; 
            else ans = 2; 
        }
        else ans = 2; 
        cout << ans << '\n'; 
    }
}

/*
worst case: 
choose (1, 0) * min(a, b) then choose (0, 1) for what left 
note that a and b is sorted.
*/