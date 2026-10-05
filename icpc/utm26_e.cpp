#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
#define all(x) begin(x), end(x) 
const int INF = 1e9; 
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    string s; 
    cin >> s; 
    vector<int> cnt(26, INF);
    set<char> uniq; 
    int ans = 0; 
    for (char c: s){
        uniq.insert(c);
        int p = c - 'a';
        if (cnt[p] == INF) cnt[p] = 1; 
        else cnt[p]++; 
    }
    sort(all(cnt));
    for (int i = 0; i < max(0, (int)uniq.size() - 2); i++) ans += cnt[i];
    cout << ans << '\n';
}