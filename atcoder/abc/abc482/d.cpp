#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

void solve(){   
    int N; 
    cin >> N; 
    vector<ll> X(N);
    ll sum = 0; 
    for (int i = 0; i < N; i++) {
        int x; 
        cin >> x; 
        x /= 2; 
        X[i] = x; 
        sum += x; 
    }
    for (int a: X) cout << a << " ";
    cout << '\n';
    for (int i = 0; i < N; i++){
        cout << abs(sum - (X[i] * N)) << '\n';
    }
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