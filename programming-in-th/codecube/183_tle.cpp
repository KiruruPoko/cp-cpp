#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
const double pi = 3.141592653589793;
const ll MOD = 1e9 + 7; 
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int n;
    cin >> n; 
    vector<ll> id(n + 1);
    int idx; 
    for (int i = 1; i <= n; i++) cin >> id[i];
    while (n--){
        cin >> idx; 
        cout << id[idx] << '\n';
        id.erase(id.begin() + idx);
    }
    return 0; 
}   
