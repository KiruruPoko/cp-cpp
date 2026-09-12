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
        vector<int> a(n);
        int ans = 2; 
        int cnt = 0;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            if (i > 0 && i < n - 1 && a[i] == 0) cnt++; 
            if ((i == 0 && a[i] == 0) || (i == n - 1 && a[i] == 0)) ans--; 
        }
        if (ans - cnt <= 0) cout << ans << '\n'; 
        else cout << -1 << '\n';
    }
}
