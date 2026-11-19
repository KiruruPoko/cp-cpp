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
    int m;
    cin >> m;
    vector<int> D(m, 0);
    for (int i = 1; i <= m; i++){
        cin >> D[i];
        D[i] += D[i - 1];
    }
    int a = lower_bound(all(D), (D[m] + 1) / 2) - D.begin();
    cout << a << " " << ((D[m] + 1) / 2) - D[a - 1] << '\n';
}