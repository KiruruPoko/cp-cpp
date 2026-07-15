#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int t; 
    cin >> t;
    while (t--){
        int ans = -1; 
        int n; 
        cin >> n; 
        multimap<int, int> mm;
        set<int> s;
        for (int i = 1; i <= n; i++){
            int a; 
            cin >> a; 
            mm.insert({a, i});
            s.insert(a);
        }
        for (auto &b: s) {
            if (mm.count(b) == 1){
                auto it = mm.find(b);
                ans = it -> second; // set is sort value by default, so it will run through minimum element first.
                break; 
            }
        }
        cout << ans << '\n';
    }
    return 0; 
}
