#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int n, q; 
    cin >> n >> q; 
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i];
    while (q--){
        int cmd; 
        cin >> cmd; 
        if (cmd == 1){
            int p, x; 
            cin >> p >> x;
            a[p] = x; 
        }
        if (cmd == 2){
            int l, r; 
            cin >> l >> r; 
            set<int> s(a.begin() + l, a.begin() + r + 1);
            if (sz(s) < 2){
                cout << 0 << '\n';
                continue;
            }
            int second_mx;
            auto it = s.rbegin();
            it++; 
            second_mx = *it;
            int cnt = 0; 
            for (int i = l; i <= r; i++){
                if (a[i] == second_mx) cnt++; 
            }
            cout << cnt << '\n';
        }
    }
}   