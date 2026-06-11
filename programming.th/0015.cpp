#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b,c;
    cin >> a >> b >> c;
    cout << max(c - b - 1, b - a -1) << "\n";
    return 0;
}
