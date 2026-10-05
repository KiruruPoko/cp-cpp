#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt; 
    while (tt--){
        int n; 
        cin >> n; 
        string s;
        cin >> s;
        int z = 0; 
        int o = 0; 
        int aa = 1e9; 
        for (int i = 0; i < n; i++) z += s[i] == '0';
        if (s[0] == '1') {
            cout << z << '\n'; 
            continue;
        }
        for (int i = 0; i < n; i++){
            o += (s[i] == '1');
            z -= (s[i] == '0');
            aa = min(aa, o + z);
        }
        cout << aa << '\n';
    }
}