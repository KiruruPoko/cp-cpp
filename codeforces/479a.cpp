#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int a, b, c;
    cin >> a >> b >> c; 
    if (a == 1){
        cout << max({a + (b * c), (a + b) * c, a + b + c}) << '\n'; 
    }
    else if (b == 1){
        cout << max({a + b + c, (a + b) * c, a * (b + c)})  << '\n'; 
    }
    else if (c == 1){
        cout << max((a * b) + c, a * (b + c)) << '\n';
    }
    else cout << a * b * c << '\n';
    return 0;
}