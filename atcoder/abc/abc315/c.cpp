#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;
#define f first 
#define s second


int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int N; 
    cin >> N; 
    vector<pii> ic(N);
    for (int i = 0; i < N; i++) cin >> ic[i].s >> ic[i].f; 
    sort(rall(ic));
    int ss = ic[0].f; 
    int ans = 0; 
    for (int i = 1; i < N; i++){
        int t = ic[i].f;
        if (ic[i].s == ic[0].s) t /= 2; 
        ans = max(ans, ss + t);
    }
    cout << ans << '\n';
}


