#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
#define pll pair<ll, ll> 
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int n, m; 
    cin >> n >> m; 
    vector<ll> cost(n + 1);
    vector<ll> shop(n + 1, 0);
    vector<ll> checkpoint(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        cin >> cost[i];
        if (cost[i] > 0){
            checkpoint[i] += cost[i];
        }
        else shop[i] += abs(cost[i]);
        if (i > 0){
            checkpoint[i] += checkpoint[i - 1];
            shop[i] += shop[i - 1];
        }
    }
    while (m--){
        ll pos, money; 
        cin >> pos >> money; 
        int last = lower_bound(shop.begin() + pos + 1, shop.end(), money + shop[pos]) - shop.begin() - 1;
        cout << checkpoint[last] - checkpoint[pos] << '\n';
    }
}
