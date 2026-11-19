#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

void solve(){
    int p, q; 
    string s1, s2;
    cin >> p >> q; 
    cin >> s1 >> s2;
    vector<int> cs1(26);
    vector<int> cs2(26);
    bool ans = true;
    for (char c: s1){
        cs1[c - 'a']++;
    }
    for (char c: s2){
        if (cs1[c - 'a'] > 0) cs1[c - 'a']--;
        else {
            ans = false;
        }
    }
    for (int i = 0; i < 26; i++){
        if (i != (int)'s' - 'a'&& i != (int)'i' - 'a' && i != (int)'x' - 'a'){
            if (cs1[i] != 0) ans = false;
        }
        else {
            if (cs1[i] != 1) ans = false;
        }
    }
    cout << (ans? "Yes": "No") << '\n';
}

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int tt; 
    cin >> tt;
    while (tt--){
        solve();
    }
}