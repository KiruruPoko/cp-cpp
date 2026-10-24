#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int n; 
    cin >> n; 
    for (int i = 1; i <= n; i++){
        if (i % 3 == 0) cout << "Fizz" << '\n';
        else cout << i << '\n'; 
    }
    return 0; 
}
