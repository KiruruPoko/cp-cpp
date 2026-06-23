#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
const double pi = 3.141592653589793;
const ll MOD = 1e9 + 7; 
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    vector<int> dir(4);
    for (int i = 0; i < 4; i++) cin >> dir[i];
    sort(dir.begin(), dir.end());
    cout << dir[0] * dir[2] << '\n';
    return 0; 
}
