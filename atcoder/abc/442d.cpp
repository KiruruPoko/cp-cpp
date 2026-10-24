#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
#define pll pair<ll, ll>
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);   
    int n, q; 
    cin >> n >> q; 
    vector<ll> a(n + 1); 
    vector<ll> p(n + 1, 0);
    for (int i = 1; i <= n; i++){
        int k;
        cin >> k; 
        a[i] = k; 
        p[i] = p[i - 1] + k; 
    }
    for (int i = 0; i < q; i++){
        int cmd; 
        cin >> cmd; 
        if (cmd == 1){
            int x; cin >> x; 
            p[x] = p[x] - a[x] + a[x + 1]; 
            swap(a[x], a[x + 1]);
            // for debugging 
            // cout << '\n'; 
            // cout << "Element: ";
            // for (auto &v: a) cout << v << " ";
            // cout << '\n';
        }
        if (cmd == 2){
            int l, r; 
            cin >> l >> r; 
            cout << p[r] - p[l - 1] << '\n';
        }
    }
}  
