#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    ll n, m, k; 
    cin >> n >> m >> k; 
    vector<ll> a(n); 
    vector<bool> eat(n);
    ll cal = 0;
    for (int i = 0; i < n; i++) cin >> a[i]; 
    for (int i = 0; i < n; i++){
        if (i >= m && eat[i - m]) cal -= a[i - m]; 
        if (cal + a[i] <= k){
            eat[i] = true; 
            cal += a[i]; 
            puts("Yes"); 
        }
        else puts("No");
    }
}
