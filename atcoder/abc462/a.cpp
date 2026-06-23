#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
const double pi = 3.141592653589793;
const ll MOD = 1e9 + 7; 
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    string s;
    cin >> s; 
    vector<char> temp = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    vector<char> num; 
    for (char c: s){
        for (int i = 0; i < (int)temp.size(); i++){
            if (c == temp[i]) {
                num.emplace_back(temp[i]);
                break;
            }
        }
    }
    if (num.empty()) cout << "" << '\n';
    for (auto &x: num) cout << x;
    cout << '\n';
}
