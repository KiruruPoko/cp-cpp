#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
const double pi = 3.141592653589793;
const ll MOD = 1e9 + 7; 
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int n; 
    cin >> n; 
    vector<vector<int>> ans(n);
    for (int i = 0; i < n; i++){
        int k;
        cin >> k;
        for (int j = 0; j < k; j++){
            int c; 
            cin >> c; 
            ans[c - 1].push_back(i + 1);
        }
    }
    for (int i = 0; i < n; i++){
        cout << (int)ans[i].size(); 
        for (auto &x : ans[i]) cout << ' ' << x;
    }
    cout << '\n';
    return 0;
}
