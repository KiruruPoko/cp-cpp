#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int tt; 
    cin >> tt;
    while (tt--){
        int k; 
        cin >> k; 
        vector<int> v(k + 1);
        int pcnt = 0; 
        bool ans = false; 
        for (int i = 0; i < k; i++) {
            cin >> v[i + 1];
            if (v[i + 1] >= 2) pcnt += v[i + 1] % 2 + v[i + 1] / 2; // check if there is char with 2+ cards
        }
        if (k == 1){ // have only one char case
            if (v[1] > 2) ans = true; 
        }
        else if (pcnt >= 2) ans = true; // ex a = 1, b = 3, c = 2 -> we can do abcbcbb bc -> bigram
        cout << (ans? "Yes": "No") << '\n';
    }
}
