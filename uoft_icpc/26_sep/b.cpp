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
        vector<int> v; 
        int st = 1; 
        for (int i = 0; i < 2*n; i += 2){
            if (st < n){
                v.emplace_back(st);
                v.emplace_back(st + 1);
                st++; 
            }
            else { 
                v.emplace_back(st); 
                v.emplace_back(1);
            }
        }
        for (int i = 1; i <= n; i++){
            v.emplace_back(i);
        }
        int l = 1, r = n; 
        while (l <= r){
            if (l == r) {
                v.emplace_back(l);
                break; 
            }
            v.emplace_back(l);
            v.emplace_back(r);
            l++; 
            r--; 
        }
        for (auto &a: v) cout << a << " ";
        cout << '\n';
    }
}   