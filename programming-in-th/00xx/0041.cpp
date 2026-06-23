#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
const double pi = 3.141592653589793;
int main(){
    cout << fixed << setprecision(6);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; 
    cin >> n; 
    double k;
    if (n == 1){
        k = 2; 
        cout << k << '\n';
        return 0; 
    }
    if (n % 2 == 0) {
        k = n; 
        cout << k << '\n';
        return 0;
    }
    if (n == 3) {
        k = 2 + sqrt(3);
        cout << k << '\n';
        return 0; 
    }
    else {
        k = 2 + 2 * sqrt(3) + n - 5;
        cout << k << '\n';
        return 0; 
    }
}
