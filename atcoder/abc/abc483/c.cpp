#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

void solve(){
    int N, M; 
    cin >> N >> M; 
    vector<int> vote(N + 1);
    vector<vector<int>> sch(N + 1);

    for (int i = 0; i < M; i++){
        int a, b; 
        cin >> a >> b; 
        vote[a]++;
        sch[a].push_back(b);
    }
    pii first = {-1, -1};
    pii second = {-1, -1};
    for (int i = 1; i <= N; i++){
        pii p = {vote[i], -i};
        if (p > first){
            second = first; 
            first = p;
        }
        else if (p > second){
            second = p;
        }
    }
    for (int c = 1; c <= N; c++){
        pii best = {-1, 1};
        for (int b: sch[c]){
            vote[b]++;
            best = max(best, make_pair(vote[b],-b));
        }
        if (-first.second != c){
            best = max(best, first);
        }
        else best = max(best, second);
        cout << -best.second << '\n';
        for (int b: sch[c]){
            vote[b]--;
        }
    }
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