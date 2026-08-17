#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int n; 
    string s; 
    cin >> n; 
    cin >> s; 
    int cnt = 0; 
    if (n == 1 && s == "x") cnt++; 
    else {
        for (int i = 0; i < n; i++){
            if (s[i] == 'x'){
                if (i == 0 && s[i + 1] == 'x') cnt++; 
                else if (i == n - 1 && s[i - 1] == 'x') cnt++; 
                else {
                    if (s[i - 1] == 'x' && s[i + 1] == 'x') cnt++; 
                }
            }
            else continue; 
        }
    }
    cout << cnt << '\n';
}
