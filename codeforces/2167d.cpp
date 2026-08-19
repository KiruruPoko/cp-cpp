#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    vector<ll> prime = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53};
    int tt; 
    cin >> tt; 
    while (tt--){
        int n; 
        cin >> n;
        vector<ll> v(n);
        set<ll> uniq; 
        ll ans = 1e18;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i] % 2 != 0) ans = 2;
            uniq.insert(v[i]);
        }
        sort(v.begin(), v.end());
        if (v[0] == 1 || v[0] == 2) ans = min(ans, v[0] + 1); 
        else {
            ans = min(ans, v[0] - 1);
            for (auto &a: uniq){
                for (int i = 0; i < (int)prime.size(); i++){
                    if (a % prime[i]) {
                        ans = min(ans, prime[i]);
                        break; 
                    }
                }
            }
        }
        cout << ans << '\n';
    }
}
