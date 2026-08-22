#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int n; 
    cin >> n;
    vector<int> stick(n); 
    int ans = 1e9; 
    for (int i = 0; i < n; i++) cin >> stick[i]; 
    for (int i = 0; i < n; i++){ 
        int s_l = 0, s_r = 0; 
        for (int j = 0; j <= i; j++){ 
            s_l += stick[j]; 
        }
        for (int k = i + 1; k < n; k++){
            s_r += stick[k]; 
        }
        int diff = abs(s_l - s_r); 
        ans = min(ans, diff); 
    }
    cout << ans << '\n';
}
