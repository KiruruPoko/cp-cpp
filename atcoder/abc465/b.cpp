#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int x, y, l, r, a , b; 
    int total = 0; 
    cin >> x >> y >> l >> r >> a >> b; 
    for (a; a < b; a++){
        if (a < l || a >= r){
            total += y;
        }
        else total += x;
    }
    cout << total << '\n';
    return 0;
}