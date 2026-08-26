#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int tt; 
    cin >> tt; 
    while (tt--){
        int n; 
        cin >> n; 
        int cnt = 0; 
        ll sum = 0; 
        for (int i = 0; i < n; i++){ 
            int a; 
            cin >> a; 
            if (a != 0) cnt++; 
            sum += a; 
        }
        ll sum2 = sum - cnt;
        ll sub = n - 1 - sum2; 
        cout << cnt - max(0ll, sub) << '\n'; 
    }
}