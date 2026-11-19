#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

vector<int> topo_sort(const vector<int> g[], vector<int> in_deg, int N){
    vector<int> res; 
    queue<int> q; 
    for (int i = 1; i <= N; i++){
        if (in_deg[i] == 0) q.push(i);
    }
    while (!q.empty()){
        int temp = q.front();
        q.pop();
        res.push_back(temp);
        for (int u: g[temp]) {
            in_deg[u]--;
            if (in_deg[u] == 0) q.push(u);
        }
    }
    return res;
}
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int N; 
    cin >> N;
    vector<int> g[N + 1];
    vector<int> in_deg(N + 1, 0);
    for (int i = 1; i <= N; i++){
        int s; 
        cin >> s; 
        for (int j = 0; j < s; j++){
            int b; 
            cin >> b;
            g[i].push_back(b);
            in_deg[b]++;
        }
    }
    queue<int> que;
    vector<bool> f(N + 1, false);
    que.push(1);
    f[1] = true;
    while (!que.empty()){
        int q = que.front(); que.pop();
        for (int u: g[q]){
            if (!f[u]){
                f[u] = true; 
                que.push(u);
            }
        }
    }
    auto t = topo_sort(g, in_deg, N);
    vector<int> ans; 
    for (int v: t){
        if (f[v] && v != 1) ans.push_back(v);
    }
    reverse(all(ans));
    for (int v: ans) cout << v << " ";
    cout << '\n';
}   