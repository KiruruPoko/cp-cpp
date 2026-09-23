#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int n, q; 
    cin>>n>>q; 
    string forest[n+1];
    ll pfx[n+1][n+1] = {0};
    for (int i=1; i<=n; i++){
        cin >> forest[i];
    }
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            pfx[i][j] = pfx[i][j-1] + (int)(forest[i][j - 1] == '*');
        }
    }
    // for (int i=1; i<=n; i++){
    //     for (int j=1; j<=n; j++){
    //         cout << pfx[i][j] << " ";
    //     }
    //     cout << '\n';
    // }
    while (q--){
        ll tree = 0;
        int y1, x1, y2, x2; 
        cin >> y1 >> x1 >> y2 >> x2; 
        for (y1; y1 <= y2; y1++){
            tree += pfx[y1][max(x1, x2)] - pfx[y1][min(x1, x2)-1];
        }
        cout << tree << '\n';
    }


}
