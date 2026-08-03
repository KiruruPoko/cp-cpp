#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int tt; 
    cin >> tt; 
    while (tt--){
        int n, a, b; 
        cin >> n >> a >> b;
        vector<int> p_cnt(3); 
        char ph[n][n];
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                cin >> ph[i][j]; 
                if (ph[i][j] == 'W') p_cnt[0]++; 
                if (ph[i][j] == 'G') p_cnt[1]++; 
                if (ph[i][j] == 'B') p_cnt[2]++;
            }
        }
        if (a == 0 && b == 0) cout << p_cnt[1] + p_cnt[2] << '\n';
        else {
            
        }
    }
}
