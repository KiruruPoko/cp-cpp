#include <bits/stdc++.h>
using namespace std;

bool isvow(char c){
    if (c == 'a'|| c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y') return true;
    else return false; 
}
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    string s;
    cin >> s; 
    for (int i = 0; i < (int)s.size(); i++){
        s[i] = tolower(s[i]);
        if (!isvow(s[i])) {
            cout << '.';
            cout << s[i];
        }
    }
    cout << '\n';
    return 0; 
}