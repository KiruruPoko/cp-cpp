#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
const double pi = 3.141592653589793;
const ll MOD = 1e9 + 7; 
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int n;
    cin >> n;
    set<int> ans;
    for (int i = 6; i <= n; i++){
        if (i >= 6){
            if (i % 3 == 0 || i % 20 == 0) ans.insert(i);
            else {
                for (int j = 1; 20 * j <= i; j++){
                    if ((i - (20 * j)) >= 6 && (i - (20 * j)) % 3 == 0) ans.insert(i);
                }
            }
        }
    }
    if (ans.empty()) cout << "no" << '\n';
    else {
        for (auto &x: ans) cout << x << '\n';
    }
    return 0;
}
