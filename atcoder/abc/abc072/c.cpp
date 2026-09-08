#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int n; 
    cin >> n; 
    vector<int> v(n);
    unordered_map<int, int> cnt; 
    set<int> s; 
    int ans = 0; 
    for (int i = 0; i < n; i++){
        cin >> v[i];
        cnt[v[i]]++;
        s.insert(v[i]);
    }
    for (auto &a : s) {
    for (int x : {a - 1, a, a + 1}) {
        ans = max(ans, cnt[x - 1] + cnt[x] + cnt[x + 1]);
    }
    }   
    cout << ans << '\n';
}