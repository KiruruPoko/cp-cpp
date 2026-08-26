#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);   
    int n,t; 
    cin>>n>>t; 
    vector<ll> a(n); 
    for (int i = 0; i < n; i++) cin >> a[i];
    int r = -1, sum = 0, ans = 0; 
    for (int l = 0; l < n; sum -= a[l++]){
        while (r + 1 < n && sum + a[r+1] <= t) sum += a[++r];
        ans = max(ans, r - l + 1);
    }
    cout << ans << '\n';
}  
