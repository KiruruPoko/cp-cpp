#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

const int MX = 200005;
vector<int> primes;
void sieve(){
    vector<bool> is_prime(MX, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= MX; i++){
        if (is_prime[i]){
            for (int j = i * i; j <= MX; j += i){
                is_prime[j] = false; 
            }
        }
    }
    for (int i = 2; i <= MX; i++){
        if (is_prime[i]) primes.emplace_back(i);
    }
}
void solve(){
    int n; 
    cin >> n; 
    vector<ll> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];        
    }
    for (int i = 0; i < n; i++){
        auto it = lower_bound(all(primes), a[i]);
        a[i] = *it;
    }
    for (auto &b: a) cout << b << " ";
    cout << '\n';
}

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int tt; 
    cin >> tt;
    sieve();
    while (tt--){
        solve();
    }
}