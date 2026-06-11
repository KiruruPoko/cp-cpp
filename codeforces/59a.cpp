#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; 
    cin >> s;  
    int l = 0, u = 0; 
    for (int i = 0; i < s.length(); i++){
        if (!isupper(s[i])) l++; 
        else if (isupper(s[i])) u++; 
    }
    if (u > l) {
        for (auto &x: s){
            x = toupper(x);
        }
        cout << s << "\n";
    }
    else {
        for (auto &x: s){
            x = tolower(x);
        }
        cout << s << "\n"; 
    }
}   