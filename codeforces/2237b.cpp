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
        vector<int> a(n), c(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        set<int> s; 
        for (int i = 0; i < n; i++){
            int x;
            cin >> x;
            s.insert(x);
        }
        bool ok = true; 
        for (int i = 0; i < n; i++){
            auto it = s.lower_bound(a[i]);
            if (it == s.end()){
                ok = false; 
                break; 
            }
            c[i] = *it; 
            s.erase(it);
        }
        if (!ok){
            cout << -1 << '\n';
            continue;
        }
        int cnt = 0; 
        for (int i = 0; i < n; i++){
            for (int j = i + 1; j < n; j++){
                if (c[i] > c[j]) cnt++; 
            }
        }
        cout << cnt << '\n';
    }
}