#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);   
    int tt; 
    cin >> tt; 
    while (tt--){
        ll a, b;
        cin >> a >> b;
        ll x; 
        if (b % a == 0) x = b * b / a;  
        if (b % a != 0) x = b * a / __gcd(a, b);
        cout << x << '\n';
    }
}  
