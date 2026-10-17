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
    int n, d; 
    cin >> n >> d; 
    vector<int> t(n);
    vector<int> l(n);
    for (int i = 0; i < n; i++) cin >> t[i] >> l[i];
    for (int i = 1; i <= d; i++){
        int mx = 0;
        for (int j = 0; j < n; j++){
            mx = max(mx, t[j] * (l[j] + i));
        }
        cout << mx << '\n';
    }
}
