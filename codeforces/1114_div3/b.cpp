#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int tt;
    cin >> tt; 
    while (tt--){
        int n; 
        cin >> n; 
        string s; 
        cin >> s; 
        int ans = 1, x = 0; 
        for (int i = 1; i < n; i++){
            if (i == n - 1) break; 
            if (s[i] != s[i - 1]) ans++; 

            if (s[i] != s[i - 1] && s[i] != s[i + 1]){ // condition to check if there is any most optimal deletable character.
                if (s[i + 1] == s[i - 1]) x = 2; 
                else x = max(x, 1); 
            }
        }
        cout << ans - x << '\n';
    }
}
