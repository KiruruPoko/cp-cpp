#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
const double pi = 3.141592653589793;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b; 
    cin >> a >> b; 
    if (a <= 0 && b >= 0) cout << "Zero";
    if (a > 0 && b > 0) cout << "Positive";
    if (a < 0 && b < 0) {
        if (abs(abs(a) - abs(b)) % 2 != 0) cout << "Positive";
        else if (a == b) cout << "Positive";
        else cout << "Negative";
    }
    return 0;
}
