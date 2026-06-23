#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
const double pi = 3.141592653589793;
const ll MOD = 1e9 + 7; 

int n; 
vector<ll> weights;

ll recurse_apple(int idx, ll sum1, ll sum2){
    if (idx == n) return abs(sum1 - sum2);
    // cout << "sum1: " << sum1 << " " << "sum2: " << sum2 << '\n';
    return min(recurse_apple(idx + 1, sum1 + weights[idx], sum2),
                recurse_apple(idx + 1, sum1, sum2 + weights[idx]));
}

int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    cin >> n; 
    weights.resize(n);
    for (int i = 0; i < n; i++) cin >> weights[i]; 
    cout << recurse_apple(0, 0, 0) << '\n';
    return 0;
}   
