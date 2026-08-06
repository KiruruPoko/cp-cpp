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
        map<int, int> f; 
        vector<int> v(n); 
        int max_f = 0; 
        int foc = 0;
        int sum = 0; 
        for (int i = 0; i < n; i++){ 
            cin >> v[i]; 
            f[v[i]]++; 
            if (f[v[i]] > max_f){ 
                max_f = f[v[i]];
                foc = v[i]; 
            }
            sum += v[i]; 
        }
        cout << sum - max_f * foc + foc * min(max_f, n - max_f + 2) << '\n';
    }
}
