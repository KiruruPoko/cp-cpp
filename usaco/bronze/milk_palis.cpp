#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,y,m; 
    cin >> x >> y >> m;
    int closet = 0;
    for (int i = 0; i < m; i++){
        if (x * i > m) break;
        for (int j = 0; j < m; j++){
            int n = (x * i) + (y * j);
            if (n > m) break; 
            closet = max(closet, n);
        }
    }
    cout << closet << "\n";
}
