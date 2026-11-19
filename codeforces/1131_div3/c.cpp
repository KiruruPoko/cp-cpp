#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

void solve(){
    int n; 
    cin >> n; 
    vector<int> a(n);
    int one_cnt = 0; 
    for (auto &e: a) {
        cin >> e;
        if (e == 1) one_cnt++;
    }
    if (one_cnt == n){
        cout << -1 << '\n';
    }
    else {
        int del = 0; 
        if (a[0] != 1 && a[n - 1] != 1){ // e.g 21111111..111112
            for (int i = 1; i < n - 1; i++){
                if (a[i] == 1) del++; 
                else {
                    del = 0;
                    break;
                }
            }
        }
        else if (a[0] != 1 && a[n - 1] == 1){ // e.g 21111111..111111
            for (int i = 1; i < n; i++){
                if (a[i] == 1) del++; 
                else {
                    del = 0;
                    break;
                }
            }
            if (del > 0) del--;
        }
        else if (a[n - 1] != 1 && a[0] == 1){ // e.g 11111111..111112
            for (int i = n - 2; i >= 0; --i){
                if (a[i] == 1) del++; 
                else {
                    del = 0;
                    break;
                }
            }
            if (del > 0) del--;
        }
        int ans = accumulate(all(a), 0);
        cout << ans - del - 1 << '\n';
    }
}

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int tt; 
    cin >> tt;
    while (tt--){
        solve();
    }
}