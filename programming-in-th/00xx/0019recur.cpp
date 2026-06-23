#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
const double pi = 3.141592653589793;
const ll MOD = 1e9 + 7; 
const int INF = 1e9; 

vector<pair<int, int>> perket;
int n; 
ll ans = LLONG_MAX; 
void mindiff(int idx, ll product, ll sum, bool used){
    if (idx == n) {
        if (used){
            ans = min(ans, abs(product - sum));
        }
        return;
    }
    mindiff(idx + 1, product * perket[idx].first, sum + perket[idx].second, true); // used
    mindiff(idx + 1, product, sum, used); // skip
}
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    cin >> n; 
    perket.resize(n);
    for (int i = 0; i < n; i++) cin >> perket[i].first >> perket[i].second;
    mindiff(0, 1, 0, false);
    cout << ans << '\n';
    return 0; 
}
