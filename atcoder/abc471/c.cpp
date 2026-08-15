#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int n; 
    cin >> n; 
    set<ll> a; 
    for (int i = 0; i < n; i++){ 
        int c; 
        cin >> c; 
        a.insert(c); 
    }
    ll ans = 0; 
    int pos = 0; 
    for (int i = 0; i < n; i++){
        auto it = s.lower_bound(pos); 
        int nxt ; 
        if (it == s.begin()){
            nxt = *it; // smallest value more than pos
        }
        else if (it == s.end()){
            nxt = *--it; 
            /* greatest value more than pos (shift 2 to the left from it)
            {-a, pos, a} -> --it will point at -a and it will point at a
            */
        }
        else {
            int cand1 = *it;
            int cand2 = *--it;
            if (abs(cand1 - pos) < abs(cand2 - pos)) nxt = cand1; 
            else nxt = cand2; 
        }
        ans += abs(nxt - pos); 
        s.erase(nxt); 
        pos = nxt;
    }
    cout << ans << '\n'; 
}
