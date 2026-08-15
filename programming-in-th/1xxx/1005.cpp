#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
const double pi = 3.141592653589793;
const ll MOD = 1e9 + 7; 
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int n; 
    cin >> n;
    vector<int> series(n);
    vector<int> seq();
    int ans = 0; 
    int sum = 0; 
    for (auto &a: series) cin >> a;
    for (int i = 0; i < n; i++){
        int sum += series[i];
        if (sum > ans){
            ans = sum;
        }
    }
    if (ans == 0) cout << "Empty sequence" << '\n';
    else {
        for (auto &a: seq) cout << a << " ";
        cout << '\n';
        cout << ans << '\n'; 
    }

    return 0; 
}
