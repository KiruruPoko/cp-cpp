#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
#define all(x) begin(x) end(x)
#define pll pair<ll, ll> 
#define f first 
#define s second

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int n, m; 
    cin >> n >> m; 
    vector<ll> a(n + 1);
    vector<ll> cost(n + 1, 0);
    ll mn = 1e18;
    ll min_node;
    ll sum = 0; 
    for (int i = 1; i <= n; i++) {
        cin >> a[i];  
        if (a[i] < mn) {
            mn = a[i];
            min_node = i;
        }
    } 
    for (int i = 1; i <= n; i++){
        if (i == min_node) continue; 
        else cost[i] = a[i] + mn; 
        sum += cost[i];
    }
    for (int i = 1; i <= n; i++) cout << "node " << i << ": " << "cost: " << cost[i] << '\n';
    cout << "Before discount: " << sum << '\n';
    while (m--){
        ll x, y, w; 
        cin >> x >> y >> w; 
        if (x > y || y == min_node) swap(x, y);
        if (w < cost[x] && w < cost[y]){
            if (cost[x] > cost[y]){
                sum -= cost[x];
                sum += w;
                cost[x] = w;
            }
            else if (cost[y] > cost[x]){
                sum -= cost[y];
                sum += w;
                cost[y] = w;
            }
        }
        else if (w < cost[y] && w >= cost[x]) {
            sum -= cost[y];
            sum += w; 
            cost[y] = w;
        }
        else if (w < cost[x] && w >= cost[y]){
            sum -= cost[x];
            sum += w;
            cost[x] = w;
        }
    }
    cout << sum << '\n';
}
// greedy alone is not enough. Need MST and DSU to check the connected edges. :(
