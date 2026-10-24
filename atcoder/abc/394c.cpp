#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
#define rep(i,n) for (ll i = 0; i < (n); i++)
#define rrep(a, b) for (ll j = (a); j >= (b); --j)
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);
    string s; 
    cin >> s; 
    int n = (int)s.size(); 
    rep(i, n){
        if (i > 0 && s[i] == 'A' && s[i - 1] == 'W'){ 
            s[i] = 'C'; 
            rrep(i - 1, 0){ // check contigious w in case of w*n + a
                if (s[j] == 'W'){
                    if (j > 0){
                        if (s[j - 1] == s[j]){
                            s[j] = 'C';
                            // cout << s << '\n'; 
                        }
                        else {
                            s[j] = 'A'; 
                            // cout << s << '\n';
                            break;
                        }
                    }
                    else {
                        s[j] = 'A'; 
                        // cout << s << '\n';
                        break;
                    }
                }
            }
        }
    }
    cout << s << '\n'; 
}
