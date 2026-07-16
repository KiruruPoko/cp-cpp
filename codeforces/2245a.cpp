#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int t; 
    cin >> t; 
    while (t--){
        int n, k; 
        cin >> n >> k; 
        string wp; 
        cin >> wp;
        int ans = 0;
        if (k * 2 > n) {
            cout << -1 << '\n';
            continue; 
        }   
        for (int i = 0; i < k; i++){
            ans += (wp[i] != 'R') + (wp[n - i - 1] != 'L'); 
        }
        cout << ans << '\n';
    }
}
