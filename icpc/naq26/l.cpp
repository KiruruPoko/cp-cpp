#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size;
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;
typedef long double ld; 

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int tt; 
    cin >> tt; 
    while (tt--){
        ld n, p; 
        cin >> n >> p; 
        vector<ld> s(n);
        ld sum = 0; 
        for (int i = 0; i < n; i++){
            cin >> s[i];
            sum += s[i];
        }
        ld ans = 0; 
        for (int i = 0; i < n; i++){
            ld cnt = (p * s[i]) / sum; 
            ans += (cnt * cnt) / s[i];
        }   
        cout << fixed << setprecision(18) << ans << '\n';
    }
}

// proof: titu's lemma