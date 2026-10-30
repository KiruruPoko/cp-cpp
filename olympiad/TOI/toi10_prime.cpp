#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
#define all(x) begin(x), end(x)
const int mx = 1e7; 
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int n; 
    cin >> n; 
    vector<bool> p(mx + 1, true);
    p[0] = p[1] = false; 
    int cnt = 0;
    for (ll i = 2; i <= mx; i++){
        if (!p[i]) continue; 
        cnt++; 
        if (cnt == n){
            cout << i << '\n';
            return 0; 
        }
        for (ll j = i * i; j <= mx; j += i) p[j] = false;
    }
}
