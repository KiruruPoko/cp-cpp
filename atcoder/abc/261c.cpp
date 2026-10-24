#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int n; 
    cin >> n; 
    map<string, int> cnt; 
    for (int i = 0; i < n; i++){
        string s; 
        cin >> s; 
        if (cnt[s] != 0) cout << s << "(" << cnt[s] << ")" <<'\n'; 
        else cout << s << '\n'; 
        cnt[s]++; 
    }
}
