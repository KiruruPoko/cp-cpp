#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
const double pi = 3.141592653589793;
const ll MOD = 1e9 + 7; 
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    string s;
    getline(cin, s);
    for (int i = 0;  i < (int)s.length(); i++){
        cout << s[i];
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') i +=2; 
    }
    cout << '\n';
    return 0; 
}
