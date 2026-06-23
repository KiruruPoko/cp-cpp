#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
const double pi = 3.141592653589793;
const ll MOD = 1e9 + 7; 
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int n;
    cin >> n; 
    if (n == 2 || n == 3) {
        cout << "NO SOLUTION" << '\n';
        return 0;
    }
    for (int i = 2; i <= n; i += 2) cout << i << " ";
    for (int i = 1; i <= n; i += 2) cout << i << " ";
    cout << '\n';
    return 0; 
}
