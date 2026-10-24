#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
#define rep(i,n) for (ll i = 0; i < (n); i++)
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);
    string s, t; 
    cin >> s >> t; 
    int j = 0; 
    bool ok = true;
    for (char c: s){
        if (j < 3 && toupper(c) == t[j]) j++;
    }
    if (j == 3 || (j == 2 && t[2] == 'X')) ok = true; 
    else ok = false; 
    cout << (ok? "Yes": "No") << '\n';
}
