#include <bits/stdc++.h> 
typedef long long ll;
int main(){
    int n, k;
    std::cin >> n >> k;
    std::vector<ll> t(n);
    std::vector<ll> dist;
    for (int i = 0; i < n; i++){
        std::cin >> t[i];
    } 
    if (k == n) std::cout << n << '\n';
    else {
        for (int i = 1; i < n; i++){
            dist.push_back(t[i] - t[i - 1] - 1);
        }
        sort(dist.begin(), dist.end());
    
        ll ans = n;
        for (int i = 0; i < n - k; i++){
            ans += dist[i];
        }
        std::cout << ans << '\n';
    }
}