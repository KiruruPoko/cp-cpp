#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

vector<int> adj[300001]; 
bool visited[300001]; 
void bfs(int v){
    if (visited[v]) return;  
    queue<int> q;
    q.push(v); 
    visited[v] = true;
    while (!q.empty()){
        int cur = q.front(); 
        q.pop(); 
        for (auto &a: adj[cur]){
            if (!visited[a]){
                visited[a] = true;
                q.push(a); 
            }
        }
    }
}
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int n, m;   
    cin >> n >> m;
    vector<string> ans; 
    for (int i = 0; i < m; i++){
        int x, y; 
        cin >> x >> y; 
        adj[y].push_back(x); 
    }
    int q; 
    cin >> q; 
    for (int i = 0; i < q; i++){
        int cmd; 
        cin >> cmd; 
        if (cmd == 1) { 
            int node;
            cin >> node; 
            bfs(node); 
        }
        else if (cmd == 2){
            int v; 
            cin >> v; 
            (visited[v]? ans.push_back("Yes"): ans.push_back("No")); 
        }
    }
    for (auto &s: ans) cout << s << '\n';
}
