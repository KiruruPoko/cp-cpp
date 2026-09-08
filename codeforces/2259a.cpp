#include <bits/stdc++.h>
typedef long long ll;

int main(){
    std::ios::sync_with_stdio(false); 
    std::cin.tie(nullptr); 
    int tt; 
    std::cin >> tt; 
    while (tt--){
        int n, k; 
        std::cin>>n>>k; 
        std::string s; 
        std::cin>>s; 
        int cnt = 0;
        for (int i = 0; i < n; i += k){
            std::string farm; 
            farm = s.substr(i, k);
            size_t zero = farm.find('0');
            if (zero == std::string::npos){
                cnt++;
            }
        }
        std::cout << cnt << '\n';
    }
}
