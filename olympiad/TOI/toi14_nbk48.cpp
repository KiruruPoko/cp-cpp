#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
#define pii pair<int, int> 
vector<ll> num(100001); 
vector<pii> v(100001);
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int n, q; 
    cin >> n >> q; 
    num.resize(n + 1); 
    v.resize(n + 1); 
    for (int i = 1; i <= n; i++){
        cin >> v[i].first; 
        v[i].first += v[i - 1].first; 
        v[i].second = i; 
    }
    sort(v.begin() + 1, v.end()); 
    for (int i = 1; i <= n; i++){
        num[i] = v[i].first; 
        v[i].second = max(v[i].second, v[i - 1].second); 
    }  
    while (q--){ 
        int c; 
        int ans; 
        cin >> c; 
        int cnt = upper_bound(num.begin() + 1, num.end(), c) - (num.begin() + 1); 
        cout << v[cnt].second << '\n';
    }
}
