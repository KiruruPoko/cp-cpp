#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

const int maxn = 2000005; 
int n, m;
bool visited[maxn];
vector<int> con[maxn]; 

void dfs(int x){ 
    visited[x] = true; 
    for (auto y: con[x]) {
        if (!visited[y]) dfs(y);
    }
}
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    cin >> n >> m; 
    for (int i = 0; i < m; i++){
        int a, b; 
        cin >> a >> b;
        con[a].push_back(b);
        con[b].push_back(a); 
    }
    for (int i = 1; i <= n; i++){
        if (con[i].size() != 2) {
            cout << "No" << '\n';
            return 0; 
        }
    }
    dfs(1); 
    for (int i = 1; i <= n; i++){
        if (!visited[i]) {
            cout << "No" <<'\n';
            return 0;
        }
    }
    cout << "Yes" << '\n';
}
