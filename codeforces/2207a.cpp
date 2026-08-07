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
        for (int i = 1; i < n - 1; i++){
            if (s[i - 1] == '1' && s[i + 1] == '1') s[i] = '1';
        }
        int ans1 = 0; 
        for (char c: s) if (c == '1') ans1++;

        for (int i = 1; i < n - 1; i++){
            if (s[i - 1] == '1' && s[i + 1] == '1') s[i] = '0';
        }
        int ans = 0; 
        for (char c: s) if (c == '1') ans++;
        cout << ans << " " << ans1 << '\n';
    }
}
