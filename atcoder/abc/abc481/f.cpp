#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

const int MOD = 998244353;
const ll INF = 1e18; 
vector<pll> g[200005];
struct ascending{
    bool operator() (const pll &a, pll &b) const { 
        return a.second > b.second;
    }
};
using pq_min = priority_queue<pll, vector<pll>, ascending>;
void dijkstra_mod(ll *dist, ll n, ll src){
    vector<bool> visited(n + 1, false);
    for (int i = 1; i <= n; i++) dist[i] = INF; 
    pq_min pq; 
    dist[src] = 0; 
    pq.push({src, 0});
    while (!pq.empty()){
        int cur = pq.top().first;
        pq.pop();
        if (visited[cur]) continue; 
        visited[cur] = true; 
        for (auto v: g[cur]){
            if (!visited[v.first]){
                if ((((dist[cur] % MOD * 10 % MOD) % MOD) + v.second % MOD) % MOD < dist[v.first]){
                    dist[v.first] = (((dist[cur] % MOD * 10 % MOD) % MOD) + v.second % MOD) % MOD;
                    pq.push({v.first, dist[v.first]});
                }
            }
        }
    }
}
void solve(){
    int n, m; 
    cin >> n >> m; 
    for (int i = 0; i < m; i++){
        int a, b, w; 
        cin >> a >> b >> w; 
        g[a].emplace_back(b, w);
    }
    ll dist[n + 1];
    dijkstra_mod(dist, n, 1);
    for (int i = 2; i <= n; i++) cout << dist[i] << '\n';
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

// order does matter so basically 10 * dist[top] + dist[v]