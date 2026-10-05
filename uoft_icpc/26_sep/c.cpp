#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int a, b, c, n; 
    cin >> a >> b >> c >> n; 
    int bugd = a - c; 
    int beaver = b - c; 
    bool ans = true; 
    if (bugd + beaver + c >= n || bugd < 0 || beaver < 0) ans = false; 
    if (ans){
        cout << n - (beaver + bugd + c) << '\n';
    }
    else cout << -1 << '\n';
}   