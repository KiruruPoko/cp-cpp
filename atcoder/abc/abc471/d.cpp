#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    ll q, v; 
    priority_queue<ll> pq;
    cin >> q >> v; 
    while (q--){
        int cmd; 
        cin >> cmd; 
        if (cmd == 1){ 
            ll t, w;
            cin >> t >> w; 
                pq.push(w - t); 
        }
        else if (cmd == 2) {
            ll t; 
            cin >> t; 
            if (!pq.empty()) {
                cout << min(v, (ll)pq.top() + t) << '\n'; 
                pq.pop();
            }
            else cout << -1 << '\n'; 
        }
    }
}
