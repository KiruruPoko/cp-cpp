#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
const double pi = 3.141592653589793;
const ll MOD = 1e9 + 7; 
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false); 
    int l, n;
    cin >> l >> n; 
    vector<string> word(n);
    bool chain = true;
    for (int i = 0; i < n; i++) cin >> word[i];

    for (int i = 0; i < n; i++){
        int cnt = 0;
        if (i == n - 1) {
            cout << word[i] << '\n';
            return 0;
        }
        for (int j = 0; j < l; j++){
            if (word[i][j] != word[i + 1][j]) cnt++; 
            if (cnt > 2) {
                chain = false;
                break;
            }
        }
        if (!chain) {
            cout << word[i] << '\n';
            return 0; 
        }
    }
}
