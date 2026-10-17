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
    int n; 
    cin >> n; 
    vector<ll> A(n);
    ll ans = 0; 
    for (int i = 0; i < n; i++){
        cin >> A[i];
    }
    for (int i = 0; i < n; i++){    
        auto it = lower_bound(all(A), A[i] * 2); 
        if (it != A.end()){
            ans += n - (it - A.begin());
        }
    }
    cout << ans << '\n';
}
// If A_i can pair with B_j then it will be true for every value >= B_j. Thus, lower_bound is enough to find number of possible pair for each value