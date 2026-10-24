#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
#define pll pair<ll, ll> 
const ll INF = 1e18; 
const int MAXN = 2e6;
vector<pll> graph[MAXN];
struct ascending{
    bool operator()(const pll &a, const pll &b) const { 
        return a.second > b.second;
    }
};
using pq_min = priority_queue<pll, vector<pll>, ascending>; 
void dijkstra(ll *dist, int n, int src){
    bool visited[n + 1] = {false};
    pq_min pq;
    for (int i = 1; i <= n; i++) dist[i] = INF;
    dist[src] = 0; 
    pq.push({src, 0});
    while (!pq.empty()){
        int minidx = pq.top().first;
        pq.pop();
        if (visited[minidx]) continue; 
        visited[minidx] = true; 
        for (auto v: graph[minidx]){
            if (!visited[v.first] && dist[minidx] + v.second < dist[v.first]){
                dist[v.first] = dist[minidx] + v.second; 
                pq.push({v.first, dist[v.first]});
            }
        } 
    }
}
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int n, m; 
    cin >> n >> m;
    ll a[n + 1];
    pll con;
    for (int i = 1; i <= n; i++) cin >> a[i]; 
    for (int i = 0; i < m; i++){
        ll b, c;
        cin >> b >> c >> con.second;
        con.second += a[c];
        con.first = c; 
        graph[b].push_back(con);
        con.first = b;
        con.second += a[b] - a[c];
        graph[c].push_back(con);  
    }
    ll dist[n + 1];
    dijkstra(dist, n, 1);
    for (int i = 2; i <= n; i++) cout << dist[i] + a[1] << " ";
    cout << '\n';
}
