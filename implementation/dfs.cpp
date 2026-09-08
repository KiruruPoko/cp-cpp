#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
// supposed n = 10000000
vector<int> graph[1000001]; 
bool visited[1000001];

void dfs(int n){
    visited[n] = true; 
    for (auto v: graph[n]) {
        if (!visited[v]) dfs(v);
    }
}
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
}
