#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int n, q; 
    cin>>n>>q; 
    vector<ll> a(n);
    vector<ll>p(n);
    for (auto &b: a) cin>>b; 
    for (int i = 0; i < n; i++){
        if (i > 0)p[i] = a[i] + p[i - 1];
        else p[i]=a[i];
    }
    for (int i = 0; i < q; i++){
        int l,r;
        cin >> l >> r; 
        if (l == r - 1) cout << a[l] << '\n';
        else {
            if (l >= 1){
                cout << p[r - 1] - p[l - 1] <<'\n';
            }
            else cout << p[r - 1] << '\n';
        }
    }
}
