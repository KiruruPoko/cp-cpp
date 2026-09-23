#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int tt; 
    cin >> tt; 
    while (tt--){
        int n; 
        cin >> n; 
        vector<int> v(n);
        vector<int> minus;
        int first_minus = 1e9, first_one = 1e9;
        int last_minus = -1e9, last_one = -1e9;
        for (int i = 0; i < n; i++){
            int a; 
            cin >> a; 
            if (a == 1 || a == -1) {
                if (a == -1){
                    first_minus = min(i, first_minus);
                    last_minus = max(i, last_minus);
                    minus.emplace_back(i);
                }
                else {
                    first_one = min(i, first_one);
                    last_one = max(i, last_one);
                }
            }
            v[i] = a;
        }
        if (!minus.empty()){
            if (first_minus == last_minus){
                if (last_minus < last_one && first_one < first_minus) v[last_minus] = 0; 
                else v[last_minus] = 1; 
            }
            else {
                if (first_minus < first_one) {
                    v[first_minus] = 1; 
                }
                else v[first_minus] = 0; 

                if (last_minus < last_one){
                    v[last_minus] = 0;
                }
                else v[last_minus] = 1; 
            }
            for (int i = 0; i < (int)minus.size(); i++){
                if (minus[i] != first_minus && minus[i] != last_minus){
                    v[minus[i]] = 0;
                }
            }
        }
        for (auto &c: v) cout << c << ' ';
        cout << '\n';
    }
}