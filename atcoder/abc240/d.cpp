#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
#define pii pair<int, int>
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int n; 
    cin >> n; 
    vector<pii> v; 
    int cnt = 0;
    for (int i = 0; i < n; i++){ 
        ++cnt; 
        int a; 
        cin >> a; 
        if (!v.empty() && v.back().first == a) v.back().second++; 
        else v.emplace_back(a, 1); 
        if (v.back().first == v.back().second){
            cnt -= v.back().second; 
            v.pop_back(); 
        }
        cout << cnt << '\n';
    }
}
/*
alternative (editorial) solution: stack of pii
*/
