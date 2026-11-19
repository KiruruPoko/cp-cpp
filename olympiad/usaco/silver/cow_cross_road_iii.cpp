#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0 ,-1, 1};
int n; 
bool visited[105][105] = {false};
set<pair<pii, pii>> road;
bool inside(int x, int y){
    return x > 0 && x <= n && y > 0 && y <= n;
}
void dfs(int x, int y){
    if (visited[x][y]) return; 
    visited[x][y] = true;
    for (int i = 0; i < 4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (!inside(nx, ny)) continue;
        if (road.count({{x, y}, {nx, ny}})) continue; 
        dfs(nx, ny);
    }
}
void solve(){
    int k, r; 
    cin >> n >> k >> r; 
    for (int i = 0; i < r; i++){
        int a, b, c, d; 
        cin >> a >> b >> c >> d; 
        pair l = make_pair(a, b);
        pair rr = make_pair(c, d);
        road.insert(make_pair(l, rr));
        road.insert(make_pair(rr, l)); // undirected
    }
    vector<pii> ans;
    vector<pii> cow;
    for (int i = 0; i < k; i++){
        int a, b; 
        cin >> a >> b; 
        cow.push_back({a, b});
    }   
    for (int i = 0; i < sz(cow); i++){
        memset(visited, false, sizeof(visited));
        dfs(cow[i].first, cow[i].second);
        for (int j = i + 1; j < sz(cow); j++){
            if (!visited[cow[j].first][cow[j].second]) ans.push_back({i, j});
        }
    }
    // cout << "-------------------------------------------" << '\n';
    // for (auto &a: ans) cout << a.first << " " << a.second << '\n';
    cout << sz(ans) << '\n';
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

/*
USACO Silver 2017 Feb P3: Why Did Cow Cross the Road III 
https://usaco.org/index.php?page=viewproblem2&cpid=716
*/ 