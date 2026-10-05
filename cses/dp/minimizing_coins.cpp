#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
#define all(x) begin(x) end(x)
const int INF = 1e9; 
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int n, target; 
    cin >> n >> target;
    vector<int> coins(n);
    for (int i = 0; i < n; i++) cin >> coins[i];
    vector<int> dp(target + 1, INF);
    dp[0] = 0; 
    for (int i = 1; i <= target; i++){
        for (int j = 0; j < n; j++){
            if (i - coins[j] >= 0){
                dp[i] = min(dp[i], dp[i - coins[j]] + 1);
            }
        }
    }
    cout << (dp[target] == INF? -1: dp[target]) << '\n';
}