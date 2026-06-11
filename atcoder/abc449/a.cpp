#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
const double pi = 3.141592653589793;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    double d; 
    cin >> d;
    double sq_r = (d * 0.5) * (d * 0.5);
    cout << fixed << setprecision(15) << sq_r * pi << "\n";
}
