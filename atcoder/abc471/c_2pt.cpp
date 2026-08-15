#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int n; 
    cin >> n; 
    vector<ll> a(n); 
    for (int i = 0; i < n; i++){
        cin >> a[i]; 
    }
    a.emplace_back(0); 
    sort(a.begin(), a.end()); 
    auto it = find(a.begin(), a.end(), 0); 
    int p = distance(a.begin(), it); 
    ll ans = 0;        
    int l = p - 1; 
    int r = p + 1; 
    int pos = 0; // track current positiion of takahashi
    for (int i = 0; i < n; i++){
        if (l == -1){ // takahashi has reached limit of negative value
            ans += a[r] - pos; 
            pos = a[r]; 
            r++; 
        }
        else if (r == n + 1){ // takahashi has reached limit of positive value
            ans += pos - a[l]; 
            pos = a[l];
            l--; 
        }
        else {
            if (pos - a[l] <= a[r] - pos){
                ans += pos - a[l]; 
                pos = a[l]; 
                l--; 
            }
            else {
                ans += a[r] - pos;
                pos = a[r];
                r++;  
            }
        }
    }
    cout << ans << '\n';
}
