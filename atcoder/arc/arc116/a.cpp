#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
#define rep(i,n) for (ll i = 0; i < (n); i++)
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);
    int tt; 
    cin >> tt; 
    while (tt--){
        ll n; 
        cin >> n; 
        string ans; 
        if (n % 4 == 0) ans = "Even"; 
        else if (n % 2 == 0) ans = "Same"; 
        else ans = "Odd"; 
        cout<<ans<<'\n';
    }
}
