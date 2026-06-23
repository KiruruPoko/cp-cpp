#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
const double pi = 3.141592653589793;
const ll MOD = 1e9 + 7; 
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int n; 
    cin >> n; 
    int count = 0;
    for (int i = 5; n / i >= 1; i *= 5){
        count += n / i; 
    }
    cout << count << '\n';
}
