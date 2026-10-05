#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
#define all(x) begin(x), end(x)
const int MAXN = 1000005;
const int md = 1e9 + 7; 
ll dp[MAXN];
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int n; 
    cin >> n; 
    dp[0] = 1; 
    for (int i = 1; i <= n; i++){
        for (int j = i - 1; j >= 0 && i - j <= 6; --j){
            dp[i] = (dp[i] + dp[j]) % md;
        }
    }
    cout << dp[n] << '\n';
}