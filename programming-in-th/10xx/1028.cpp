#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    char cmd; 
    vector<int> v(26);
    while (cin >> cmd && cmd != '!'){
        if (cmd == '='){
            char c; 
            cin >> c; 
            int idx = c - 'A';
            cin >> v[idx];
        }
        else if (cmd == '#'){
            char c; 
            cin >> c; 
            int idx = c - 'A';
            cout << v[idx] << '\n';
        }
        else if (cmd == '+'){
            char c, d; 
            cin >> c >> d; 
            int idx = c - 'A'; 
            int idx_2 = d - 'A';
            v[idx] += v[idx_2];
        }
        else if (cmd == '-'){
            char c, d; 
            cin >> c >> d; 
            int idx = c - 'A'; 
            int idx_2 = d - 'A';
            v[idx] -= v[idx_2];
        }
        else if (cmd == '*'){
            char c, d; 
            cin >> c >> d; 
            int idx = c - 'A'; 
            int idx_2 = d - 'A';
            v[idx] *= v[idx_2];
        }
        else if (cmd == '/'){
            char c, d; 
            cin >> c >> d; 
            int idx = c - 'A'; 
            int idx_2 = d - 'A';
            v[idx] /= v[idx_2];
        }
    }   
    cout << '!' << '\n';
    return 0;
}
