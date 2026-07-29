#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int k, n, w; 
    int cost = 0; 
    cin >> k >> n >> w; 
    for (int i = 1; i <= w; i++) cost += i * k;
    if (n < cost) cout << abs(cost - n) << '\n';
    else cout << 0 << '\n';
    return 0;
}
