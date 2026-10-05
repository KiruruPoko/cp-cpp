#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
#define all(x) begin(x), end(x) 
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int n; 
    cin >> n; 
    vector<ll> sz(n);
    for (int i = 0; i < n; i++){
        cin >> sz[i];
    }
    vector<ll> hole(n);
    ll mn = 1e18; 
    ll bp = *min_element(all(sz)); // upper_bound of the possible answer; 
    unordered_map<ll, ll> cnt;  
    ll mode_cnt = 0; 
    ll mode = 1e18;
    ll ans_min = 0; 
    ll ans_cur = 1e18; // in case mode > upper bound of bp  
    for (int i = 0; i < n; i++){
        cin >> hole[i];
        cnt[hole[i]]++; 
        if (cnt[hole[i]] > mode_cnt){
            mode = hole[i];
            mode_cnt = cnt[hole[i]];
        }
        else if (cnt[hole[i]] == mode_cnt){
            mode = min(mode, hole[i]);
        }
        mn = min(mn, hole[i]);
    }
    // min case
    for (int i = 0; i < n; i++){ 
        ans_min += hole[i] - mn; 
    }
    if (mode <= bp){
        ans_cur = 0; 
        for (int i = 0; i < n; i++){
            if (hole[i] < mode) ans_cur += hole[i] + (sz[i] - mode);
            else ans_cur += hole[i] - mode; 
        }
    }    
    if (ans_min <= ans_cur) cout << mn << " " << ans_min << '\n';
    else cout << mode << " " << ans_cur << '\n';
}
