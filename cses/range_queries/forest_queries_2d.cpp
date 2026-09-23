#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int n, q; 
    cin>>n>>q; 
    int forest[n+1][n+1];
    ll pfx[n+1][n+1] = {0};
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            char c; 
            cin>>c;
            forest[i][j] += c == '*';
        }
    }
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            pfx[i][j] = forest[i][j] + pfx[i][j-1] + pfx[i-1][j] - pfx[i-1][j-1];
        }
    }
    /*
    prefix[a][b] = sum[i....a] sum[j....b] arr[i][j]
    which can be derived as 
    prefix[i][j] = prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1] + arr[i][j]
    */
    while (q--){
        ll tree = 0;
        int y1, x1, y2, x2; 
        cin >> y1 >> x1 >> y2 >> x2; 
        cout << pfx[y2][x2] - pfx[y1-1][x2] - pfx[y2][x1-1] + pfx[y1-1  ][x1-1] << '\n';
    }


}
