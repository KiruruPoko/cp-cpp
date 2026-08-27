#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);   
    int tt; 
    cin >> tt; 
    while (tt--){
        int n, k; 
        cin >> n >> k;
        vector<int> v(n);
        vector<int> a(n);
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i] % 2 == 0) cnt++; 
        }
        for (int i = 0; i < n; i++){
            a[i] = k * ((v[i] + k - 1) / k) - v[i];
        }
        sort(v.begin(), v.end());
        int mn = *min_element(a.begin(), a.end());
        if (k != 4) cout << mn << '\n';
        else {
            if (find(v.begin(), v.end(), 4) != v.end()){
                cout << 0 << '\n';
            }
            else cout << min(mn, max(0, 2 - cnt)) << '\n';
        }
    
    }
}  
