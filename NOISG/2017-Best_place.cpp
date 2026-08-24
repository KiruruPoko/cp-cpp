#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int n; 
    cin >> n; 
    vector<ll> x(n), y(n); 
    ll med_x, med_y; 
    for (int i = 0; i < n; i++) cin >> x[i] >> y[i];
    sort(x.begin(), x.end()); 
    sort(y.begin(), y.end());
    if (n % 2 == 0){
        med_x = (x[(n / 2) - 1] + x[n / 2]) / 2; 
        med_y = (y[(n / 2) - 1] + y[n / 2]) / 2; 
    }
    else { 
        med_x = x[((n + 1) / 2) - 1]; 
        med_y = y[((n + 1) / 2) - 1]; 
    }
    cout << med_x << " " << med_y << '\n'; 
} 
