#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int n, d; 
    cin >> n >> d; 
    vector<ll> v(n);
    vector<ll> ans; 
    for (auto &a: v) cin >> a; 
    for (int i = 0; i < n; i++){
        bool stand_apart = true; 
        for (int j = 0; j < n; j++){
            if (i == j) continue; 
            else { 
                if (abs(v[i] - v[j]) < d) stand_apart = false; 
            }
        }
        if (stand_apart) ans.push_back(i + 1);
    }
    cout << ans.size() << '\n';
    for (auto &a: ans) cout << a << " ";
    cout << '\n';
}
