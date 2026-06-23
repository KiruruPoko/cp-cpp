#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; 
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    int pos = 0;
    while (v[pos] == 0) pos++;
    cout << v[pos];
    for (int i = 0; i < pos; i++) cout << 0;
    for (int i = pos + 1; i < n; i++) cout << v[i];

    return 0;
}