#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

using mint = atcoder::modint998244353;

void solve(){   
    int N; 
    cin >> N; 
    vector<int> A(N);   
    for (int i = 0; i < N; i++) cin >> A[i];
    if (A[0] == 0 || A[N - 1] != N % 2) {
        cout << 0 << '\n';
        return;
    }
    vector<mint> fact(N + 1);
    fact[0] = 1; 
    for (int i = 1; i <= N; i++) fact[i] = fact[i - 1] * i;
    mint ans = 1;
    int tot = 0; 
    for (int i = 0; i < N - 1; i++){
        if (A[i] != A[i + 1]){
            continue;
        }
        int j = i; 
        while (j < N - 1 && A[j] == A[j + 1]) j++;
        int len = j - i; 
        if (len % 2 == 1) {
            cout << 0 << '\n';
            return;
       }
        int k = len / 2; 
        tot += k; 
        for (int t = 1; t <= k; t++) ans *= (2 * t - 1);
        ans /= fact[k];
        i = j;
    }
    ans *= fact[tot];
    cout << ans.val() << '\n';

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

/*
let 
0 = paint white (w);
1 = paint black (b);
initial will be bwbwbwbwbwbwbwbwbwbwbw
invariant is A_1 will be always be "b" and A_N will not change
every time choose section l and r where color of A_l = A_r 
also l + 1 .... r - 1 need to be differ from A_l 
and change l + 1 ... r - 1 so basically color of A_l ..... A_r will be the same
(?)any 0 inside the grid that isn't A_N && that grid = ans will be invariant
*/ 