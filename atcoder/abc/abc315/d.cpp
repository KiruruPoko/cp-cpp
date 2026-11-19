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
    int H, W; 
    cin >> H >> W;
    char c[H + 1][W + 1];
    for (int i = 1; i <= H; i++){
        for (int j = 1; j < W; i++){
            cin >> c[i][j];
        }
    }
}