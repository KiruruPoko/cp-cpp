#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
#define all(x) begin(x) end(x)
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    string n, m; 
    cin >> n >> m; 
    int sz_1 = n.size();
    int sz_2 = m.size();
    int ans = 0;
    for (int i = 0; i < sz_1 - sz_2 + 1; i++){
        string s = n.substr(i, sz_2); 
        if (s == m) ans++; 
    }    
    cout << ans << '\n';
}
// need some string algorithm (probably kmp?)