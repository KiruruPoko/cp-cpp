#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
#define pll pair<ll, ll>
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);   
    int n;
    cin >> n;
    vector<int> enter(n), leave(n);
    int customer = 0;
    int mx = 0; 
    for (int i = 0; i < n; i++){
        cin >> enter[i] >> leave[i];
    }
    sort(enter.begin(), enter.end());
    sort(leave.begin(), leave.end());
    int l = 0, r = 0;
    while (l < n && r < n){
        if (enter[l] < leave[r]){
            customer++;
            l++;
            mx = max(mx, customer);
        }
        else if (enter[l] > leave[r]) {
            customer--; 
            r++;
        }
        else {
            r++;
            l++; 
        }
    }   
    cout << mx << '\n';
}  
