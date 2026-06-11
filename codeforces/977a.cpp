#include <bits/stdc++.h> 
using namespace std;
typedef long long ll; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k; 
    cin >> n >> k; 
    while (k--){
        if (n % 10 != 0) n--;
        else if (n % 10 == 0) n /= 10;
    }
    cout << n << "\n";
}