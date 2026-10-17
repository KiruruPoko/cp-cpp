#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int n; 
    cin >> n; 
    int adj[n + 1][n + 1];
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cin >> adj[i][j];
        }
    }
    for (int j = 1; j <= n; j++){
        for (int i = 1; i <= n; i++){
            if (adj[i][j] == 1) cout << i << " ";
        }
        cout << '\n';
    }
}