#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
const double pi = 3.141592653589793;
const ll MOD = 1e9 + 7; 
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int a, b, c;
    cin >> a >> b >> c;
    int cnt = 0;
    while (a + b + c != 3){
        if (a == max({a, b, c})) {
            a /= 2; 
            cnt++;
        }
        else if (b == max({a, b, c})){
            b /= 2;
            cnt++;
        }
        else if (c == max({a, b, c})){
            c /= 2; 
            cnt++;
        }
    }
    cout << cnt << '\n';
}
