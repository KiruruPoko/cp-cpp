#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int n; 
    cin >> n; 
    vector<int> v(256, 0);
    for (int i = 0; i < n; i++){
        int l, h, r; 
        cin >> l >> h >> r;
        for (l; l < r; l++){
            v[l] = max(h, v[l]);
        }
    }
    for (int i = 1; i < 256; i++){
        if (v[i - 1] != v[i]) cout << i << ' ' << v[i] << ' '; 
        else continue;
    }
}