#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
const double pi = 3.141592653589793;
const ll MOD = 1e9 + 7; 

int n; 
int cnt = 0; 
void solve(int idx, int left, int right){
    if (idx == n){
        int diff = abs(left - right);
        if (diff <= 1) cnt++;
        return;
    }
    solve(idx + 1, left + 1, right);
    solve(idx + 1, left, right + 1);
}

int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    cin >> n; 
    solve(0, 0, 0);
    cout << cnt << '\n';
    return 0; 
}
