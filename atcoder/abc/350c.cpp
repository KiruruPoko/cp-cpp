#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int n; 
    cin >> n; 
    vector<int> permu(n + 1);
    int pos[n + 1]; 
    vector<pair<int, int>> ans; 
    for (int i = 1; i <= n; i++) {
        cin >> permu[i];
        pos[permu[i]] = i; 
    } 
    for (int i = 1; i <= n; i++){
        if (permu[i] != i) {
            int j = pos[i];  
            ans.emplace_back(make_pair(i, j));
            swap(permu[i], permu[j]); 
            pos[permu[i]] = i, pos[permu[j]] = j;
        }
        else continue;
    }
    cout << ans.size() << '\n';
    for (auto &a: ans) cout << a.first << " " << a.second <<'\n';
}
