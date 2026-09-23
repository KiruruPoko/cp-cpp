#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    ll n, k; 
    cin >> n >> k; 
    if ((n / k) % 2 == 0) cout << "NO" << '\n';
    else cout << "YES" << '\n';
}