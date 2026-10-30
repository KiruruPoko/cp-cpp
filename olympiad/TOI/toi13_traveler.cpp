#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
#define pll pair<ll, ll> 
#define f first
#define s second
#define all(x) begin(x), end(x)

const int MAXM = 10005;
const ll INF = 1e18;
vector<pll> graph[MAXM];
struct ascending {
    bool operator()(const pll &a, const pll &b) const {
        return a.s > b.s; 
    }
};
bool cmp(const pll &a, const pll &b){
    if (a.s != b.s) return a.s < b.s; 
    else return a.f < b.f; 
}
using pq_min = priority_queue<pll, vector<pll>, ascending>; 
void dijkstra(ll *dist, ll n, ll src){
    vector<bool> visited(n, false);
    pq_min pq; 
    for (int i = 0; i < n; i++) dist[i] = INF; 
    dist[src] = 0; 
    pq.push({src, dist[src]});
    while (!pq.empty()){
        int node = pq.top().f;
        pq.pop();
        if (visited[node]) continue;
        visited[node] = true;
        for (auto v: graph[node]){
            if (!visited[v.f]){
                if (dist[node] + v.s < dist[v.f]){
                    dist[v.f] = dist[node] + v.s;
                    pq.push({v.f, dist[v.f]});
                }
            }
        }
    }
}
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    ll n, m; 
    cin >> n >> m;  
    ll x, y, z;
    cin >> x >> y >> z;
    for (int i = 0; i < m; i++){
        int n1, n2, w; 
        cin >> n1 >> n2 >> w; 
        graph[n1].emplace_back(n2, w);
        graph[n2].emplace_back(n1, w);
    }
    ll dist[n];
    dijkstra(dist, n, x);
    if (dist[y] <= z){
        cout << y << " " << dist[y] << " " << 0 << '\n';
    }
    else {
        ll dist2[n];
        vector<pll> v;
        dijkstra(dist2, n, y); 
        for (int i = 0; i < n; i++){
            if (dist[i] <= z) v.emplace_back(i, dist2[i]); // count only possible case.
        }
        sort(all(v), cmp);
        cout << v[0].f << " " << dist[v[0].f] << " " << dist2[v[0].f] << '\n';
    }
}
/*
Goal: finding shortest path of x to y within z
If impossible, finding node that is closet to y 
dijkstra(x) first then if dist[y] > z -> dijkstra[y] and use the shortest one. 
*/