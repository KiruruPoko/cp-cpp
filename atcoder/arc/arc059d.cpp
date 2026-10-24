#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    string s; 
    cin >> s; 
    int n = s.length();
    for (int i=0; i+1<n; i++){
        if (s[i] == s[i + 1]) {
            cout << i + 1 << " " << i + 2 << '\n';
            return 0; 
        }
        else if (i != n - 2 && s[i] == s[i + 2]){
            cout << i + 1 << " " << i + 3 << '\n';
            return 0;
        }
    }
    cout << -1 << ' ' << -1 << '\n';
}
