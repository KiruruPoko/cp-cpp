#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
const double pi = 3.141592653589793;
const ll MOD = 1e9 + 7; 
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int n; 
    string s; 
    cin >> n;
    cin >> s;
    for (int sub_len = 1; sub_len <= (int)s.length(); sub_len++){
        bool sol = true;
        unordered_map <string, int> sub_freq; 
        for (int i = 0; i <= n - sub_len; i++){
            string sub = s.substr(i, sub_len);
            sub_freq[sub]++;
            if (sub_freq[sub] > 1) sol = false;
        }
        if (sol) {
            cout << sub_len << '\n';
            break;
        }
    }
    return 0;

}
