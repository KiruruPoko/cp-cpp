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
    int matrix[2][2];
    int r, c; 
    cin >> r >> c; 
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            cin >> matrix[i][j];
        }
    }
    cout << matrix[r - 1][c - 1] << '\n';
}