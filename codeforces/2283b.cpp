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
    for (int i = 0; i < n; i++) cin >> a[i]; 
    int cnt = 0; 
    for (int i = 0; i < n; i++){
        int temp = 0; 
        for (int j = 0; j < n; j++){
            if (a[j] % a[i] == 0) temp++;  
        }   
        cnt = max(cnt, temp); 
    }
    cout << n - cnt << '\n';
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