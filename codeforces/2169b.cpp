#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int tt; 
    cin >> tt; 
    while (tt--){
        string s;
        cin >> s; 
        bool valid = true;
        for (int i = 0; i < (int)s.length() - 1; i++){
            if (s[i] != '<' && s[i + 1] != '>'){
                cout << -1 << '\n'; 
                valid = false; 
                break; 
            }
        }
        if (valid){
            int left = count(s.begin(), s.end(), '<'); 
            int right = count(s.begin(), s.end(), '>');
            cout << (int)s.length() - min(left, right) << '\n';
        }
    }
}
