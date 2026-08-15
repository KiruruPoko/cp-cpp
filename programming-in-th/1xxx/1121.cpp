#include <bits/stdc++.h> 
using namespace std; 
typedef long long ll; 

int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int tt; 
    cin >> tt; 
    while (tt--){
        stack<char> paren; 
        string s; 
        cin >> s; 
        for (char c: s){ 
            if (!paren.empty()) {
                if (c == ')'){
                    if (paren.top() == '(') paren.pop(); 
                    else paren.push(c);
                }
                else if (c == '}'){
                    if (paren.top() == '{') paren.pop(); 
                    else paren.push(c); 
                }
                else if (c == ']'){
                    if (paren.top() == '[') paren.pop(); 
                    else paren.push(c); 
                }
                else paren.push(c); 
            }
            else paren.push(c); 
        }
        cout << (paren.empty()? "yes": "no") << '\n';
    }
}