#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
bool isprime(int n){
    int cnt = 0;
    if (n <= 1) return false;
    else {
        for (int i = 2; i * i <= n; i++){
            if (n % i == 0) cnt++;
        }
        if (cnt > 0) return false;
        else return true;
    }
}
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int tt; 
    cin >> tt; 
    while (tt--){
        int n; 
        cin >> n; 
        bool ok = false; 
        if (isprime(n + 1)) ok = true; 
        cout << (ok? "YES": "NO") << '\n';  
    }
}
