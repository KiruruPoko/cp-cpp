#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
const double pi = 3.141592653589793;
const ll MOD = 1e9 + 7; 
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    string s; 
    cin >> s; 
    vector<char> letter;
    vector<string> permu; 
    int cnt = 0; 
    for (char c: s) letter.emplace_back(c);
    sort(letter.begin(), letter.end());
    do{ 
        string str(letter.begin(), letter.end());
        permu.emplace_back(str);
        cnt++; 
    } while (next_permutation(letter.begin(), letter.end()));
    cout << cnt << '\n';
    for (auto &x: permu) cout << x << '\n';
    return 0; 
}
