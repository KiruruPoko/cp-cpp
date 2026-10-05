#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
bool pow_2(int x){ 
    while (x % 2 == 0 && x > 0){
        x /= 2; 
    }
    return x == 1; 
}
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int tt; 
    cin >> tt; 
    while (tt--){
        int n; 
        cin >> n; 
        int a; 
        if (n == 2) cout << 0 << " " << 1 << " " << '\n';
        else {
            for (int i = n - 1; i >= 0; --i){
                if (i % 2 == 0){
                    if (pow_2(i)) {
                        cout << i << " " << 0 << " ";
                        a = i - 1; 
                        break; 
                    }
                    else cout << i << " ";
                }
                else cout << i << " ";
            }
            for (a; a > 0; --a){
                cout << a << ' ';
            }
            cout << '\n';
        }
    }
}