#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
const double pi = 3.141592653589793;
const ll MOD = 1e9 + 7; 
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int n;
    cin >> n; 
    while (n--){
        int x, y;
        cin >> x >> y; 
        if (x < y) {
            cout << 2 << '\n';
        }
        else {
            if (x == y || y == 1 || x - y == 1) {
                cout << -1 << '\n'; 
            }
            else cout << 3 << '\n';
        }
    }
    return 0;
}
