#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
const int maxn = 200005;
int n, m; 
bool visited[maxn]; 
vector<int> gr[maxn]; 
void dfs(int i){ 
    visited[i] = true;
    for (auto y: gr[i]) {
        if (!visited[y]) dfs(y); 
    }
}
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    cin >> n >> m; 
    int deg1 = 0; 
    int deg2 = 0;
    for (int i = 0; i < m; i++){
        int a, b; 
        cin >> a >> b; 
        gr[a].push_back(b);
        gr[b].push_back(a);
    }
    for (int i = 1; i <= n; i++){ 
        if (gr[i].size() == 0) {
            cout << "No" << '\n';
            return 0;
        }
        if (gr[i].size() == 1) deg1++; 
        if (gr[i].size() == 2) deg2++;
    }
    dfs(1); 
    for (int i = 1; i <= n; i++){
        if (!visited[i]){
            cout << "No" << '\n'; 
            return 0;
        }
    }
    if (deg1 == 2 && deg2 == n - 2){
        cout << "Yes" << '\n'; 
    }
    else cout << "No" << '\n'; 
}
