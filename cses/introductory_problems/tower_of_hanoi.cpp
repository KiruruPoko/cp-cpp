#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
const double pi = 3.141592653589793;
const ll MOD = 1e9 + 7; 

vector<pair<int, int>> cnt;
void solve(int n, int a, int b, int c){
    if (n == 0) return;
    solve(n - 1, a, c, b);
    cnt.emplace_back(a, c);
    solve(n - 1, b, a, c);
}
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int n;
    cin >> n;
    solve(n, 1, 2, 3);
    cout << cnt.size() << '\n';
    for (auto &a: cnt) cout << a.first << " " << a.second << '\n';
}
