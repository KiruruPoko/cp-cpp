#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 

int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int n, m;
    cin >> n >> m; 
    string s[20];
    for (int i = 0; i < n; i++){
        cin >> s[i]; 
    }
    for (int i = 0; i < m; i++){
        int b_cnt; 
        cin >> b_cnt; 
        for (int j = 0; j < b_cnt; j++){
            if (s[0][i] == '#' || s[0][i] == 'O') break;
            for (int k = 0; k < n; k++){
                if (k == n - 1 && s[k][i] == '.') {
                    s[k][i] = '#'; 
                    break;
                }
                if ((s[k][i] == 'O'|| s[k][i] == '#') && k != 0){
                    s[k - 1][i] = '#';
                    break; 
                }
            }
        }
    }
    for (int i = 0; i < n; i++) cout << s[i] << '\n'; 
}