#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size;
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int tt; 
    cin >> tt; 
    while (tt--){
        int n; 
        cin >> n; 
        char grid[n][n];
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if (j == n - i - 1) grid[i][j] = 'C';
                else grid[i][j] = '.';
            }
        }
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                cout << grid[i][j];
            }
            cout << '\n';
        }
    }
}