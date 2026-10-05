#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size;
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int n; 
    cin >> n; 
    vector<int> a(n); 
    for (int i = 0; i < n; i++) cin >> a[i];
    priority_queue<int, vector<int>, greater<>> pq;
    ll cur = 0; 
    int ans = 0;
    for (int i = 0; i < n; i++){
        cur += a[i];
        ans++;
        pq.push(a[i]);
        if (cur < 0 && !pq.empty() && pq.top() < 0){
            int t = pq.top();
            pq.pop();
            ans--; 
            cur -= t;
        }
    }
    cout << ans << '\n';
}