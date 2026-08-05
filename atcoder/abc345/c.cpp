#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    string s;
    cin >> s;  
    int ans = 1; 
    for (int i = 1; i < (int)s.length(); i++){ 
        if (s[i] == s[i - 1]) continue;
        else ans++;
    }
    cout << ans << '\n';
}
