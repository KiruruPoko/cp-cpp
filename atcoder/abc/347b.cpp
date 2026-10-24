#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    string s; 
    string sub; 
    set<string> ss; 
    cin >> s; 
    for (int len = 1; len <= s.length(); len++){
        for (int i = 0; i <= s.length() - len; i++){
                sub = s.substr(i, len);
                ss.insert(sub);
        }
    }
    cout << (int)ss.size() << '\n';
}
