#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int tt; 
    cin >> tt; 
    while (tt--){ 
        int n, m; 
        cin >> n >> m; 
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        if (n < 2 * m){
            cout << "NO" << '\n';
            continue;
        }
        int i = 0;
        while (i < m && a[i] <= b[i] && b[i] <= a[n - m + i]) ++i; 
        cout << ((i < m)? "NO": "YES") << '\n'; 
    }
}
