#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

const int INF = 1e9;
const int mod = 1e9 + 7;
vector<int> g[200005];
void solve(){
    int n, m; 
    cin >> n >> m; 
    for (int i = 0; i < m; i++){
        int a, b; 
        cin >> a >> b;  
        g[a].push_back(b);
        g[b].push_back(a);
    }
    vector<int> dist(n + 1, INF);
    dist[1] = 0; 
    queue<int> q; 
    q.push(1);
    while (!q.empty()){
        int cur = q.front();
        q.pop();
        for (int v: g[cur]){
            if (dist[v] == INF){
                dist[v] = dist[cur] + 1; 
                q.push(v);
            }
        }
    }
    cout << dist[n] << '\n';
}

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int tt = 1; 
    // cin >> tt;
    while (tt--){
        solve();
    }
}