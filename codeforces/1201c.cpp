#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

ll n, k;
ll x;
vector<ll> arr;
bool check(ll x){
    ll m = 0; 
    for (int i = n / 2; i < n; i++){
        if (x - arr[i] > 0) m += x - arr[i];
        if (m > k) return false;
    }
    if (m <= k) return true; 
    else return false; 
}

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    cin >> n >> k; 
    for (int i = 0; i < n; i++){
        cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());
    ll l = 1; 
    ll h = 2e9;
    while (l != h){
        ll mid = (l + h + 1) / 2;
        if (check(mid)) {
            l = mid; 
        }
        else h = mid - 1; 
    }
    cout << l << '\n';

}
