#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 

int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    int ans = n - 1; 
    for (int i = n - 2; i >= 0; --i){
        if (v[i] < v[i + 1]) ans = i; 
        else break; 
    }
    cout << ans << '\n';
}