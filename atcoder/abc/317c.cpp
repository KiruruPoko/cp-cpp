#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int n, m; 
int w[11][11]; 
bool visited[11];
int ans = 0; 
void dfs(int v, int sum){ 
    visited[v] = 1;
    ans = max(ans, sum); 
    for (int i = 1; i <= n; i++){ 
        if (!visited[i] && w[v][i]) dfs(i, sum + w[v][i]);
    }
    visited[v] = 0; 
} 
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    cin >> n >> m; 
    for (int i = 0; i < m; i++){ 
        int a, b, c; 
        cin >> a >> b >> c; 
        w[a][b] = w[b][a] = c; 
    }
    for (int i = 1; i <= n; i++) dfs(i, 0); 
    cout << ans << '\n'; 
}