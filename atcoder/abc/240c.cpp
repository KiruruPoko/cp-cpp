#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

bool dp[110][10110]; // dp[number of usage][reachable sum]
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int n, x;
    cin >> n >> x; 
    dp[0][0] = true; 
    for (int i = 0; i < n; i++){
        int a, b; 
        cin >> a >> b; 
        for (int j = 0; j < x + 1; j++){
            if (!dp[i][j]) continue;
            dp[i + 1][j + a] = true; 
            dp[i + 1][j + b] = true; 
        }
    }
    cout << (dp[n][x]? "Yes": "No") << '\n';
}
