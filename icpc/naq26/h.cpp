#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int get_rand_int(int a, int b){
    return uniform_int_distribution<int> (a, b)(rng);
}

void solve(){
    string guess = "FT";
    for (int i = 0; i < 100; i++){
        cout << guess[get_rand_int(0, 1)] << flush;
        char c; 
        cin >> c;
        if (c == 'F') cout << 'T' << flush;
        else cout << 'F' << flush; 
        cin >> c; 
    }
}
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int tt; cin >> tt; 
    while(tt--) solve();
}