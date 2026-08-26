#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
#define pll pair<ll, ll>
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);   
    int n; 
    cin >> n; 
    vector<int> num(n + 1, 0);
    for (int x = 1; x * x <= n; x++){
        for (int y = x + 1; x * x + y * y <= n; y++){
            num[x * x + y * y]++; 
        }
    } 
    set<int> ans; 
    for (int i = 1; i <= n; i++){
        if (num[i] == 1) ans.insert(i);
    }
    cout << ans.size() << '\n';
    for (auto &a: ans) cout << a << " ";
    cout << '\n';
}   
