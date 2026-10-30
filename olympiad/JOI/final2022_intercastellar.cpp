#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;
#define f first 
#define s second
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int n; 
    cin >> n; 
    vector<pll> A;
    for (int i = 0; i < n; i++){
        ll c = 1; 
        ll a; 
        cin >> a; 
        while (a % 2 == 0){
            a /= 2; 
            c *= 2; 
        }
        A.emplace_back(c, a);
    }
    for (int i = 1; i < n; i++) A[i].f += A[i - 1].f;
    // for (auto &a: A) cout << a.f << " " << a.s << '\n';
    int q; 
    cin >> q; 
    for (int i = 0; i < q; i++){
        ll x; 
        cin >> x; 
        int pos = lower_bound(all(A), make_pair(x, 0)) - A.begin();
        cout << A[pos].s << '\n';
    }
}