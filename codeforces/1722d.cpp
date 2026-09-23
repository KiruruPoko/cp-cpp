#include <bits/stdc++.h>
typedef long long ll;

int main(){
    std::ios::sync_with_stdio(false); 
    std::cin.tie(nullptr); 
    int tt; 
    std::cin >> tt; 
    while (tt--){
        int n; 
        std::cin >> n; 
        std::string s; 
        std::cin >> s;
        ll orig_sum = 0; 
        std::vector<ll> orig(n + 1), cost(n + 1), pfx(n + 1);
        for (int i = 0; i < n; i++){
            if (s[i] == 'L') {
                orig[i] = i; 
                cost[i] = (n - i - 1) - orig[i];
            }
            else {
                orig[i] = n - i - 1; 
                cost[i] = i - orig[i];
            }
            orig_sum += orig[i];
        }
        std::sort(cost.rbegin(), cost.rend());
        pfx[0] = cost[0];
        for (int i = 1; i <= n; i++){
            pfx[i] = std::max(pfx[i - 1], pfx[i - 1] + cost[i]); 
        }
        for (int i = 0; i < n; i++){
            std::cout << orig_sum + pfx[i] << " "; 
        }
        std::cout << '\n';
    }
}
