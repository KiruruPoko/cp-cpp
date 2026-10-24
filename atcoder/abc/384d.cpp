#include <bits/stdc++.h>
typedef long long ll;
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    uint64_t sum_seq = 0; 
    uint64_t n, s; 
    bool ans = false; 
    std::cin >> n >> s; 
    std::vector<uint64_t> A(n);
    std::vector<uint64_t> p(n + 1);
    for (int i = 0; i < n; i++){
        std::cin >> A[i];
        p[i + 1] = p[i] + A[i];
        sum_seq += A[i];
    }
    if (s % sum_seq == 0) ans = true; 
    else { 
        uint64_t r = s % sum_seq; 
        for (int i = 0; i < n; i++){
            uint64_t target = p[i] + r; 
            int j = std::lower_bound(p.begin(), p.end(), target) - p.begin();
            if (j <= n && p[j] == target){
                ans = true; 
                break; 
            }
        }
        if (!ans){
            for (int i = 0; i < n; i++){
                uint64_t suffix = p[n] - p[i];
                if (suffix >= r){
                    if (suffix == r){
                        ans = true; 
                        break; 
                    }
                    continue; 
                }
                uint64_t prefix = r - suffix; 
                int j = std::lower_bound(p.begin(), p.end(), prefix) - p.begin();
                if (j <= n && p[j] == prefix){
                    ans = true;
                    break;
                }
            }
        }
        
    }
    std::cout << (ans? "Yes": "No") << '\n';
}
