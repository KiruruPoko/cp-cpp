#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size;
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;
#define f first
#define s second
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int tt; 
    cin >> tt; 
    while (tt--){
        int n, m;
        cin >> n >> m; 
        set<pii> cmd; 
        for (int i = 0; i < m; i++){
            int a, b; 
            cin >> a >> b; 
            cmd.insert(make_pair(a, b));
        }
        int ans = n - 1; 
        for (auto &p: cmd){
            if (p.f == p.s - 1) ans--;
            else if (p.f > p.s){
                ans = -1; 
                break; 
            }
        }
        cout << ans << '\n';
    }
}