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
    ll n, t; 
    cin >> n >> t;
    unordered_map<ll, ll> cnt; 
    set<ll> score; 
    vector<ll> player(n + 1, 0);
    cnt[0] = n; 
    score.insert(0);
    for (int i = 1; i <= t; i++){
        ll p, sc; 
        cin >> p >> sc; 
        cnt[player[p]]--;
        if (cnt[player[p]] <= 0) score.erase(player[p]);
        player[p] += sc; 
        cnt[player[p]]++; 
        if (cnt[player[p]] > 0) score.insert(player[p]);
        cout << sz(score) << '\n';
    }
}