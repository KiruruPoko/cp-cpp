#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int h, w; 
    cin >> h >> w;
    for (int i = 0; i < h; i++){
        for (int j = 0; j < w; j++){
            if (i != 0 && i != h - 1){
                if (j != 0 && j != w - 1) cout << '.';
                else cout << '#';
            }
            else cout << '#';
        }
        cout << '\n';
    } 
    return 0;
}