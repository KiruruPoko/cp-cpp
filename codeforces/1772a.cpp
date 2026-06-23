#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
const double pi = 3.141592653589793;
const ll MOD = 1e9 + 7; 
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int n;
    cin >> n; 
    while (n--){
        string s;
        cin >> s; 
        int a = s[0] - '0';
        int b = s[2] - '0';
        cout << a + b << '\n';
    }
    return 0;
}
