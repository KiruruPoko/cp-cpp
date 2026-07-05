#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    string s; 
    string a; 
    cin >> s >> a; 
    int prod_s = 1; 
    int prod_a = 1; 
    for (char c: s) prod_s *= int(c - 'A' + 1);
    for (char c: a) prod_a *= int(c - 'A' + 1);
    cout << ((prod_s % 47 == prod_a % 47)? "GO" : "STAY") << '\n';
    return 0; 
}