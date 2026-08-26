#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int tt; 
    cin >> tt; 
    while (tt--){
        int n, k, m;
        cin >> n >> k >> m; 
        if (k > m){
            cout << "NO" << '\n';
        }
        else {
            cout << "YES" << '\n'; 
            for (int i = 0; i < n; i++){
                cout << (i % k == 0? m - k + 1 : 1) << " ";
            }
            cout << '\n'; 
        }
    }
}
