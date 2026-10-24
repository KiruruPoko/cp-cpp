#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int tt; 
    cin >> tt; 
    while (tt--){
        ll a, b, c; 
        cin >> a >> b >> c;
        cout << min({a, c, (a + b + c) / 3}) << '\n';
    }
}
