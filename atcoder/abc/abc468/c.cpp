#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int n; 
    cin >> n; 
    vector<int> p(n), q(n);
    for (int i = 0; i < n; i++) cin >> p[i];
    for (int i = 0; i < n; i++) cin >> q[i];
    vector<int> a(n);
    iota(a.begin(), a.end(), 1);
    int ans = 0; 
    do { 
        if (p < a && a < q) ans++;
    } while (next_permutation(a.begin(), a.end()));
    cout << ans << '\n';
}