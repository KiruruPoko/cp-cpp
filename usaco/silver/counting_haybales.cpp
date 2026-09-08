#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++)  cin >> v[i];
    sort(v.begin(), v.end());
    while (q--){
        int a, b; 
        cin >> a >> b; 
        int o = lower_bound(v.begin(), v.end(), a) - v.begin();
        int p = upper_bound(v.begin(), v.end(), b) - v.begin();
        int dis = abs(o - p);
        cout << dis << '\n';
    }
}
