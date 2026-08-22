#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    string s; 
    cin >> s; 
    for (char c: s) {
        if (c != 'A') cout << '.'; 
        else cout << 'A';
    }
}
