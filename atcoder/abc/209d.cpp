#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

vector<int> g[100005];
int n;
vector<int> bfs(int src){
    vector<int> dist(n + 1, -1);
    queue<int> q;
    dist[src] = 0;
    q.push(src); 
    while (!q.empty()){
        int t = q.front();
        q.pop();
        for (int x: g[t]){
            if (dist[x] == -1){
                dist[x] = dist[t] + 1;
                q.push(x);
            }
        }
    }
    return dist;
}
void solve(){
    int q;  
    cin >> n >> q; 
    for (int i = 0; i < n - 1; i++){
        int a, b;
        cin >> a >> b; 
        g[a].push_back(b);
        g[b].push_back(a);
    }
    auto dist = bfs(1);
    while (q--){
        int a, b; 
        cin >> a >> b; 
        if (dist[a] % 2 == dist[b] % 2) puts("Town");
        else puts("Road");
    }

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