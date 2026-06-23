#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
const double pi = 3.141592653589793;
const ll MOD = 1e9 + 7; 
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int q;
    cin >> q; 
    while (q--){
        int i;
        cin >> i; 
        long double result = powl(2.0L, i); // pow but use long double instead of int
        cout << fixed << setprecision(0) << result << '\n';
    }
    return 0; 
}
