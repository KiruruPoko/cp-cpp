#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    string s; 
    cin >> s; 
    if (s == "red") cout << "SSS" << '\n';
    else if (s == "blue") cout << "FFF" << '\n';
    else if (s == "green") cout << "MMM" << '\n';
    else cout << "Unknown" << '\n';
    return 0;
}
