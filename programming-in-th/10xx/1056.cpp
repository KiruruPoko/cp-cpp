#include <bits/stdc++.h> 
using namespace std; 
typedef long long ll; 

int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int n, k; 
    cin >> n >> k; 
    vector<int> v(n);
    int hr = 0; 
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.rbegin(), v.rend());
    for (int i = 0; i < n; i += k) hr += v[i]; // sort reverse -> pick highest hrs first.
    cout << hr << '\n';
}