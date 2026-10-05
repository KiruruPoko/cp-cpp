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
        vector<ll> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a.rbegin(), a.rend());
        ll prod_1 = 1; 
        for (int i = 0; i < 5; i++){
            prod_1 *= a[i];
        }
        ll prod_2 = a[0] * a[1] * a[2] * a[n - 1] * a[n - 2];
        ll prod_3 = a[0] * a[n - 1] * a[n - 2] * a[n - 3] * a[n - 4];
        cout << max({prod_1, prod_2, prod_3}) << '\n';
    }
}   