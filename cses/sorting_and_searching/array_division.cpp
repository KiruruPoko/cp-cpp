#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

bool check(const vector<ll> &arr, int k, ll max_sum){
    int sub_cnt = 0; 
    ll cur_sum = 0;
    for (auto &x: arr){
        if (x > max_sum) return false; 
        if (cur_sum + x > max_sum){
            sub_cnt++;
            cur_sum = 0;
        }
        cur_sum += x;
    }
    if (cur_sum > 0) sub_cnt++; 
    return sub_cnt <= k; 

}
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    ll n, k; 
    cin >> n >> k;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    ll l = *max_element(arr.begin(), arr.end());
    ll r = accumulate(arr.begin(), arr.end(), 0LL);
    while (l < r){
        ll mid = (l + r) / 2; 
        if (check(arr, k, mid)){
            r = mid;  
        }
        else l = mid + 1; 
    }
    cout << l << '\n';

}
