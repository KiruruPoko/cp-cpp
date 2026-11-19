#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

void solve(){
    int N; 
    cin >> N; 
    stack<pii> st; 
    st.push({0, 0});
    for (int i = 1; i <= N; i++){
        int x; cin >> x; 
        while (!st.empty() && st.top().first >= x) st.pop();
        cout << st.top().second << " ";
        st.push({x, i});
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