#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
// supposed n = 10000000
vector<int> graph[1000001]; 
bool visited[1000001];

void bfs(int n){
    queue<int> q; 
    q.push(n);
    visited[n] = true;
    while (!q.empty()){
        int cur = q.front();
        q.pop();
        for (auto v: graph[cur]) if (!visited[v]){
            visited[v] = true;
            q.push[v];
        }
    }
}
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
}
