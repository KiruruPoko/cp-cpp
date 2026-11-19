#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

bool pow_2(int x){ 
    while (x % 2 == 0 && x > 0){
        x /= 2; 
    }
    return x == 1; 
}
void solve(){
    int n; 
    cin >> n;
    vector<int> a(n);
    iota(all(a), 1);
    for (int i = 0; i < n; i++){
        if (a[i] == 1) cout << '1' << " ";
        else if (pow_2(a[i])) cout << '1' << " ";
        else cout << '0' << " ";
    }
    cout << '\n';
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