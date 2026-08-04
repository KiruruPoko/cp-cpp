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
        vector<double> a(n);
        bool ok = true; 
        for (int i = 0; i < n; i++) {
            cin >> a[i]; 
            if (i % 2 == 0) a[i] += 0.5; 
        }
        sort(a.begin(), a.end()); 
        for (int i = 0; i < n; i++) {
            int j = i + 1; 
            if (i > 0 && i < n - 1){
                if ((a[i] != i + 1 && a[j] != j + 1) || (a[i - 1] != i && a[i] != i + 1) ||  (a[i - 1] == i && a[i] == i + 1)) {
                    ok = false;
                }
            }
            if (i == n - 1) {
                if ((a[i - 1] != i && a[i] != i + 1) || (a[i - 1] == i && a[i] == i + 1)) ok = false; 
            }
            if (i == 0){
                if ((a[i] != i + 1 && a[j] != j + 1) || (a[i] == i + 1 && a[j] == j + 1)) ok = false; 
            }
        }        
        cout << (ok? "YES": "NO") << '\n';
    }
}

