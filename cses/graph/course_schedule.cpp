#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

vector<int> kahn(const vector<int> g[], vector<int>in_deg, int n){
    queue<int> q; 
    vector<int> order; 
    for (int i = 1; i <= n; i++){
        if (in_deg[i] == 0) {
            q.push(i);
            order.push_back(i);
        }
    }
    while (!q.empty()){
        int v = q.front();
        q.pop();
        for (int u: g[v]){
            --in_deg[u]; 
            if (in_deg[u] == 0){
                q.push(u);
                order.push_back(u);
            }
        }
    }
    if (sz(order) != n) return {};
    return order;
}
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int n, m; 
    cin >> n >> m; 
    vector<int> g[n + 1];
    vector<int> in_deg(n + 1, 0);
    for (int i = 0; i < m; i++){
        int a, b; 
        cin >> a >> b; 
        g[a].push_back(b);
        in_deg[b]++; 
    }   
    auto ans = kahn(g, in_deg, n);
    if (ans.empty()) cout << "IMPOSSIBLE" << '\n';
    else {
        for (int v: ans) cout << v << " ";
    }
}   