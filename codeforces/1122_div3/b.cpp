#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt; 
    while (tt--){
        ll a,b,c; 
        cin >> a >> b >> c; 
        if (abs(a + c - b) > abs(a - b)) cout << abs(a + c - b) << '\n';
        else cout << abs(a - b) << '\n';
    }
}
