#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
const double pi = 3.141592653589793;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    vector<int> num;
    for (int i = 0; i + 2 < (int)s.length(); i++){
        int convert = stoi(s.substr(i, 3));
        num.push_back(abs(convert - 753));
    }
    cout << *min_element(num.begin(), num.end()) << "\n";
}
