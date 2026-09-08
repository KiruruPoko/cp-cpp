#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
#define pii pair<int, int>

vector<int> graph[100005]; 
bool visited[100005];
void dfs(int node){
    if (visited[node]) return;
    visited[node] = true;
    for (auto v: visited[node]) dfs(v);
}
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++){
        int a, b; 
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    dfs(1);
    vector<pii> new_c;
    for (int i = 1; i <= n; i++){
        if (!visited[i]){
            graph[1].push_back(i);
            graph[i].push_back(1);
            new_c.push_back({1, i});
            dfs(i);
        }
    }
    cout << new_c.size() << '\n';
    for (auto &c: new_c) cout << c.first << " " << c.second << '\n';
}
