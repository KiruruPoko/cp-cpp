#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int n; 
    cin >> n; 
    ll sum = 0; 
    vector<ll> x(n), y(n); 
    for (int i = 0; i < n; i++) cin >> x[i] >> y[i]; 
    sort(x.begin(), x.end()); 
    sort(y.begin(), y.end()); 
    for (int i = 1; i < n; i++){
        sum += (x[i] - x[i - 1]) * i * (n - i); 
        sum += (y[i] - y[i - 1]) * i * (n - i); 
    }                       
    cout << sum << '\n';
}
/*
brute force is TLE, so we need to derive the math instead of calculating all pair
x and y are calculated independently, so we don't need to keep it in same pair?
if we sort, all node can be reached together since it is all connected.
ex. a, b, c, d, e (in ascending order)
a -> b 
a -> c = a -> b then b -> c 
a -> d = a -> b then b -> c then c -> d 
a -> e = a -> b then b -> c then c -> d then d -> e
you can see that a -> b has appeared for 4 times in total. 
Hence, the sum can be calculated by number of times appear * distance.
// code 
for (int i = 1; i < n; i++){
        sum += (x[i] - x[i - 1]) * i * (n - i); 
        sum += (y[i] - y[i - 1]) * i * (n - i); 
    }         
*/