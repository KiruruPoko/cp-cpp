#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int tt; 
    cin >> tt; 
    while (tt--){
        int n;
        char ch; 
        cin >> n; 
        cin >> ch; 
        string s; 
        cin >> s; 
        int l = 0, r = n - 1; 
        int change = 0; 
        while (l < r) { 
            // cout << s[l] << ' ' << s[r] <<'\n';
            if (s[l] != s[r]){
                change += (int)(s[l] != ch) + (int)(s[r] != ch);
            }
            // cout << change << '\n';
            l++; 
            r--;
        }
        cout << change << '\n';
    }
}