#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s = "HelloWorld";
    int x;
    cin >> x;
    s.erase(s.begin() + x - 1);
    cout << s << "\n";
    return 0;
}