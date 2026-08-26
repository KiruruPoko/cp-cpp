#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
#define pll pair<ll, ll>
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);   
    int n, x; 
    cin >> n >> x; 
    vector<pll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i + 1; 
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++){
        int l = 0, r = n - 1;  
        while (l != r){
            ll tgt = x - a[i].first;
            if (l != i && r != i && a[l].first + a[r].first == tgt) {
                cout << a[i].second << " " << a[l].second << " " << a[r].second << '\n';
                return 0;
            }
            if (a[l].first + a[r].first < tgt) l++;
            else r--;
            }
        }
    cout << "IMPOSSIBLE" << '\n';
}   
