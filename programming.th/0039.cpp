#include <bits/stdc++.h> 
using namespace std;
typedef long long ll; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m; 
    vector<int> elm(n);
    vector<int> v(m);
    for (int i = 0; i < n; i++) v[i] = i+1;
    for (int i = 0; i < m; i++) cin >> v[i];
    
    return 0; 
}