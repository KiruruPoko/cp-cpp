#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    string s; 
    cin >> s;
    multiset<char> m; 
    for (char c: s) m.insert(c);
    cout << (((int)m.count('E') > (int)m.count('W'))? "East": "West") << '\n';
    return 0;
}