#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int n; 
    cin >> n; 
    int a, b; 
    multiset<int> edges; 
    set<int> mulway;
    vector<int> adj[n + 1];
    for (int i = 0; i < n - 1; i++){
        cin >> a >> b; 
        adj[a].push_back(b);
    }
    for (int i = 1; i <= n; i++){
        for (auto u: adj[i]) {
            edges.insert(u);
            if (edges.count(u) >= n - 1 && adj[u].empty()) mulway.insert(u);
        }
    }
    // for (auto &a: mulway) cout << a << " ";
    if (!mulway.empty()) for (auto &c: mulway) cout << c << " ";
    else cout << -1 << '\n';
    return 0;
}