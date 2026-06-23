#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int x,y;
    cin >> x;
    cin >> y;
    if (x > y) cout << 2;
    else if (y % x != 0) cout << (y/x) + 1 << endl;
    else cout << y/x << endl;
}