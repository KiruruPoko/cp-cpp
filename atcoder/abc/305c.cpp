#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int h, w; 
    int u = 1e9, l = 1e9, d = -1e9, r = -1e9; 
    char s[500][500];
    cin >> h >> w; 
    for (int i = 0; i < h; i++){
        for (int j = 0; j < w; j++){
            cin >> s[i][j];
        }
    }
    for (int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if (s[i][j] == '#'){
                u = min(u, i), l = min(l, j); // minimum index of cookie
                d = max(d, i), r = max(r, j); // maximum index of cookie
            }
        }
    }
    for (int i = u; i <= d; i++){
        for (int j = l; j <= r; j++){
            if (s[i][j] == '.') cout << i + 1 << " " << j + 1 << '\n';
        }
    }
}