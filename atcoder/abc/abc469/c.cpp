#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int n; 
    cin >> n; 
    string s; 
    cin >> s; 
    vector<int> ans(n, n);
    int p = 0; 
    for (int i = 0; i < n; i++){
        if (s[i] == 'x') ans[p++] = i + 1;
    }
    for (int i = 0; i < n; i++) cout << ans[i] << '\n';
}
