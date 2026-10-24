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
    int remove = 0; 
    set<int> uniq; 
    for (int i = 0; i < n; i++){
        cin >> v[i];
        cnt[v[i]]++;
        uniq.insert(v[i]);
    }
    for (auto &u: uniq){
        if (cnt[u] < u) remove += cnt[u]; 
        else remove += cnt[u] - u;
    }
    cout << remove << '\n';
}
