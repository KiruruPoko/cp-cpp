#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int n; 
    cin >> n; 
    vector<int> id(n + 1);
    vector<bool> called (n + 1, false); 
    set <int> s;
    for (int i = 1; i <= n; i++) cin >> id[i];
    for (int i = 1; i <= n; i++){
        if (!called[i]){
            called[id[i]] = true; 
        }
        else continue; 
    }
    for (int i = 1; i <= n; i++) {
        if (!called[i]) s.insert(i);
    }
    cout << s.size() << '\n';
    for (auto &a: s) cout << a << " ";
    cout << '\n';
    return 0; 
}