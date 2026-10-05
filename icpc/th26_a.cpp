#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
#define all(x) begin(x), end(x)
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int tt; 
    cin >> tt; 
    while (tt--){
        int n;
        cin >> n; 
        vector<int> a(n + 1, 0); 
        int ans = 0; 
        for (int i = 1; i <= n; i++){
            cin >> a[i];
            if (a[i] < a[i - 1]) ans++; 
        }
        cout << ans << '\n';
    };
}