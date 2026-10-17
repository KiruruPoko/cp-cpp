#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

#define f first
#define s second

const ll INF = 1e18;
vector<pll> graph[200005];
vector<ll> spfa(int start, int n){
    vector<ll> dist(n + 1, INF);
    vector<int> count(n + 1, 0);
    dist[start] = 0; 
    queue<int> q;
    q.push(start);
    bool neg_cycle = false; 
    while (!q.empty()){
        int u = q.front();
        q.pop();
        if (++count[u] >= n){
            neg_cycle = true; 
            break;
        }
        for (auto vw: graph[u]){
            int v = vw.f, w = vw.s; 
            if (dist[u] + w < dist[v]){
                dist[v] = dist[u] + w; 
                q.push(v);
            }
        }   
    }
    return dist;  
}
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int n, m, k; 
    cin >> n >> m; 
    for (int i = 0; i < m; i++){
        ll a, b, w; 
        cin >> a >> b >> w; 
        a++; 
        b++; 
        graph[a].emplace_back(b, w);
        graph[b].emplace_back(a, w);
    }
    cin >> k; 
    for (int i = 0; i < k; i++){
        int a, w; 
        cin >> a >> w; 
        a++; 
        graph[0].emplace_back(a, w);
    }
    auto dist = spfa(0, n);
    cout << dist[1] << '\n';
}

// let node "1" be the goal