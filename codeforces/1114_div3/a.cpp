#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int tt;
    cin >> tt; 
    while (tt--){
        int a, b, c; 
        cin >> a >> b >> c;
        vector<int> v = {a, b, c};
        int cnt = 0; 
        while (v[0] != v[1] && v[1] != v[2] && v[0] != v[2]) { 
            sort(v.begin(), v.end());
            v[2]--, v[0]++, cnt++;
        }
        cout << cnt << '\n';
    }
}
