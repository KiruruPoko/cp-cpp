#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

void solve(){
    vector<int> A(10000);
    vector<int> ans;
    bool div49 = true;
    iota(all(A), 1);
    for (int i = 0; i < sz(A); i++){
        for (int j = i + 1; j < sz(A); j++){
            if ((A[i] * A[i] + A[j] * A[j]) % 7 == 0){
                // cout << A[i] * A[i] + A[j] * A[j] << " ";
                if ((A[i] * A[i] + A[j] * A[j]) % 49 == 0){
                    ans.push_back(A[i] * A[i] + A[j] * A[j]);
                    continue;
                    // cout << "Can be divided by 49" << '\n';
                }
                else div49 = false;
                // else cout << "Can't be divided by 49";
            }
        }
    }
    sort(all(ans));
    for (int i = 0; i < 5; i++) cout << ans[i] << " ";
    cout << (div49? "True" : "False") << '\n';
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