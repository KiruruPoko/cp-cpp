#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
#define all(x) begin(x), end(x)

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int tt; 
    cin >> tt; 
    while (tt--){
        int n; 
        cin >> n;
        vector<ll> v(n);
        vector<ll> ans;
        ll sum = 0; 
        map<ll, ll> cnt;
        set<ll> s; 
        for (int i = 0; i < n; i++){
            cin >> v[i];
            cnt[v[i]]++; 
            s.insert(v[i]);
        }
        ll mx = *max_element(all(v));
        ll mn = *min_element(all(v));
        if (mx == 1 && mn == 0){
            sort(all(v));
            for (int i = 0; i < n; i++){
                if (i == 0) ans.emplace_back(mn);
                else if (i == 1) ans.emplace_back(mx);
                else ans.emplace_back(v[i]);
            }
            int mex = 0; 
            for (int i = 0; i < n; i++){
                if (ans[i] == mex) mex++; 
                if (i == 0) sum += ans[i] + mex; 
                else sum += (mx + mex);
            }   
        }
        else {
            // sort(all(v));
            ans.emplace_back(mx);
            cnt[mx]--;
            for (auto &num: s) {
                if (cnt[num] > 0){
                    ans.emplace_back(num);
                    cnt[num]--;
                }
            }
            for (auto &num: s){
                if (cnt[num] > 0){
                    while (cnt[num] > 0){
                        ans.emplace_back(num);
                        cnt[num]--;
                    }
                }
            }
            ll mex = 0; 
            map<ll, bool> seen; 
            for (int i = 0; i < n; i++){
                seen[ans[i]] = true; 
                while (seen[mex]) mex++; 
                sum += (mx + mex);
            }
        }       
        // for (auto &a: ans) cout << a << " ";
        // cout << '\n';
        cout << sum << '\n';
    }
}   