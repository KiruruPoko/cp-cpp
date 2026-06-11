#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T; 
    ll x1, y1, r1, x2, y2, r2; 
    ll d;
    ll mn, mx;
    cin >> T; 
    while (T--){
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2; 
        d = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
        mn = (r1 - r2) * (r1 - r2);
        mx = (r1 + r2) * (r1 + r2);
        cout << (mn <= d && d <= mx? "Yes": "No") << "\n";
    }
}
