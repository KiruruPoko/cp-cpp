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
    map<string, bool> marked; 
    vector<string> vs(n);
    for (int i = 0; i < n; i++) {
        cin >> vs[i];
        marked[vs[i]] = true; 
    }
    sort(all(vs));
    for (int i = 0; i < n; i++){
        if (vs[i][0] != '!') break;     
        string s = vs[i].erase(0, 1);
        if (marked[s]){
            cout << s << '\n';
            return; 
        }
    }
    cout << "satisfiable" << '\n';
}

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int tt = 1; 
    // cin >> tt;
    while (tt--){
        solve();
    }
}