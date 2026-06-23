#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
const double pi = 3.141592653589793;
const ll MOD = 1e9 + 7; 
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int n; 
    ll x; 
    cin >> n >> x;
    vector<pair<int, int>> nums(n);
    for (int i = 0; i < n; i++){
        cin >> nums[i].first; 
        nums[i].second = i + 1; 
    }
    sort(nums.begin(), nums.end());
    int l = 0, r = n - 1; 
    while (l != r){
        ll sum = nums[l].first + nums[r].first;
        if (sum == x){
            cout << nums[l].second << " " << nums[r].second << '\n';
            return 0;
        } 
        (sum < x)? l++ : r--; 
    }
    cout << "IMPOSSIBLE" << '\n';
}