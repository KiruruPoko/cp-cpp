#include <bits/stdc++.h> 
typedef long long ll;
int main(){
    std::ios::sync_with_stdio(false); 
    std::cin.tie(nullptr);
    int n, m; 
    std::cin >> n >> m; 
    std::vector<ll> b(n); 
    std::vector<ll> w(m); 
    for (int i = 0; i < n; i++) std::cin >> b[i];
    for (int i = 0; i < m; i++) std::cin >> w[i];
    std::sort(b.rbegin(), b.rend());
    std::sort(w.rbegin(), w.rend());
    ll sum = 0;
    int cur = 0; 
    for (int i = 0; i < std::min(n, m); i++){
        if (b[i] < 0 && w[i] >= 0){
            if (std::abs(b[i]) < w[i]) {
                sum += b[i] + w[i];
                cur++;
            }
            else break; 
        }
        else if(b[i] > 0 && w[i] > 0){
            sum += b[i] + w[i];
            cur++; 
        }
        else break; 
    }
    for (cur; cur < (int)b.size(); cur++){
        if (b[cur] >= 0) sum += b[cur];
        else break;
    }   
    std::cout << sum << '\n';
}