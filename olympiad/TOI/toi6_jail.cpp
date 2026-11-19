#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

void solve(){
    int n, m; 
    cin >> n >> m;
    queue<int> q;  
    for (int i = 1; i <= n; i++){
        q.push(i);
    }
    int cnt = 1; 
    while (!q.empty()){
        int a = q.front();
        if (cnt % m == 0){
            cout << a << ' ';
            cnt++;
            q.pop();
        }
        else {
            cnt++; 
            q.pop();
            q.push(a);
        }
    }
    cout << '\n';
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