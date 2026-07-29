#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int tt; 
    cin >> tt;
    while (tt--){
        int a, b, x; 
        cin >> a >> b >> x; 
        int ans = 1e18; 
        int i = 0; 
        while (a != b){
            if (b > a) swap(a, b);
            ans = min(ans, abs(a - b) + i);
            a /= x; 
            i++;
        }
        ans = min(ans, i);
        cout << ans << '\n';
    }
}