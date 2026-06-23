#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
const double pi = 3.141592653589793;
const int MAX = 1e9; 
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

bool ispalindrome(int n){
    string s = to_string(n);
    int l = 0; 
    int r = s.length() - 1;
    while (l < r){
        if (s[l] != s[r]) return false;
        l++;
        r--;
    }
    return true; 
}
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int n; 
    cin >> n;
    if (n >= 100000){
        cout << 1003001 << '\n';
        return 0; 
    }
    else {
        for (n; n <= MAX; n++){
            if (isprime(n) && ispalindrome(n)){
                cout << n << "\n";
                return 0; 
            }
        }
    }
}
