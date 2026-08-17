#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int n, m;
    cin >> n >> m; 
    multimap<int, int> mm;
    for (int i = 0; i < n; i++){
        int c, s; 
        cin >> c >> s;
        mm.insert({c, s}); 
    }
    for (int k = 1; k <= m; k++){
        if (mm.count(k)){
            auto range = mm.equal_range(k);
            if (range.first != range.second){
                auto maxit = max_element(range.first, range.second,
                [](const auto& a, const auto& b){return a.second < b.second;});
                cout << maxit->second << " ";
            }
        }
        else cout << -1 << " ";
    }
    return 0; 
}
