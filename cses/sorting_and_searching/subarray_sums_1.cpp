#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);   
    int n,x;
    cin >> n >> x; 
    vector<ll> a(n);
    int cnt = 0; 
    ll sum = 0; 
    int r = -1; 
    for (int i = 0; i < n; i++) cin>>a[i];
    for (int l = 0; l < n; sum -= a[l++]){
        while (r + 1 < n && sum + a[r + 1] <= x) {
            sum += a[++r];
            if (sum == x) {
                cnt++; 
                break;
            }
        }
    }
    cout << cnt << '\n';
}  
