#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
const int MAXN = 1005; 
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int n, m; 
string building[MAXN];
bool visited[MAXN][MAXN];
void floodfill(int r, int c){
    if (r < 0 || r >= n || c < 0 || c >= m || building[r][c] == '#' || visited[r][c]){
        return;
    }
    visited[r][c] = true; 
    for (int i = 0; i < 4; i++) floodfill(r + dx[i], c + dy[i]);
}
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    cin >> n >> m; 
    for (int i = 0; i < n; i++) cin >> building[i];
    int room = 0; 
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (building[i][j] == '.' && !visited[i][j]){
                floodfill(i, j);
                room++; 
            }
        }
    }
    cout << room << '\n';
}

