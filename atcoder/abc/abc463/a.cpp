#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, y; 
    cin >> x >> y;
    int gcd = __gcd(x, y);
    cout << ((x / gcd == 16 && y / gcd == 9)? "Yes": "No") << '\n';
    return 0; 
}