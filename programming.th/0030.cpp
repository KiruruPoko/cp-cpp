#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string n;
    cin >> n; 
    int a = 0, b = 0;
    for (char c: n){
        a = (a * 10 + (c - '0')) % 3; 
        b = (b * 10 + (c - '0')) % 11;
    }
    cout << a << " " << b << "\n";
}