#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
const double pi = 3.141592653589793;
const ll MOD = 1e9 + 7; 
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int n, m; 
    cin >> n >> m;
    int l, k, c; 
    cin >> l >> k >> c;
    int temp = 0; 
    int cost = 0;
    int a; 
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a; 
            temp += a; 
        }
    }
    cost = temp + (l * c * k);
    if (cost % c) cout << (cost / c)+ 1 << '\n';
    else cout << cost / c << '\n';
}
