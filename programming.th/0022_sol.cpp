#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; 
    int l, r;
    cin >> n;
    int w = (n % 2? n: n - 1);
    l = (w + 1) / 2;
    r = l; 
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= w; j++){
            if (j == l || j == r) cout << '*';
            else cout << '-';
        }
        if (i >= n - (w / 2)) {
            l++;
            r--;
        }
        else if (l > 1 && r < w) {
            l--;
            r++;
        }
        cout << "\n";
    }
    return 0; 
}