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
        cin >> n;
        string a, b; 
        cin >> a >> b; 
        bool ok = true; 
        for (int i = 0; i < n - 1; i++){
            if (a[i] == '1' && b[i + 1] == a[i]) ok = false; 
        }
        cout << (ok? "YES": "NO") << '\n'; 
    }
}
