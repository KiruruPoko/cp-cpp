#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
#define all(x) begin(x) end(x)
vector<int> manacher(string &s){
    string ms = "$";
    for (char c: s){
        ms.push_back(c);
        ms.push_back('$');
    }
    int sz = ms.size();
    vector<int> R(sz);
    int i = 0, j = 0; 
    while (i < sz){
        while (i - j >= 0 && i + j < sz && ms[i - j] == ms[i + j]) ++j; 
        R[i] = j; 
        int k = 1; 
        while (i - k >= 0 && k + R[i - k] < j) {
            R[i + k] = R[i - k];
            ++k; 
        }
        i += k, j -= k; 
    }
    return R; 
}
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
/*
run two pointer to check if given string is palindrome or not 
then
sz = s.size() 
if (sz % 2 == 0) {
    if (first half(s) == second half(s)) add first char
    if (sz == 2) if (s[0] != s[1]) add first char.
}   
else {
    i = last char of s
    loop reverse until s[i - 1] != s[i]
    then add char from first char until that s[i - 1]
}
*/
    string s; 
    cin >> s; 
    auto r = manacher(s);
    int k = 0; 
    for (int i = s.size();; i++){
        if (r[i] >= s.size() - k) break; 
        k++; 
    }
    cout << s;
    for (int i = 0; i < k; i++){
        cout << s[k - i - 1];
    } 
    cout << '\n';
}
