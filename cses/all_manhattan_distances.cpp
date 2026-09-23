#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
typedef __int128_t int128_t; 

void print(int128_t x){
    if (x == 0){ 
        cout << 0 << '\n';
    }
    string s; 
    while (x > 0){
        s += char('0' + x % 10);
        x /= 10; 
    }
    reverse(s.begin(), s.end());
    cout << s << '\n';
}
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int n; 
    cin >> n; 
    int128_t sum = 0; 
    vector<ll> x(n);
    vector<ll> y(n);
    for (int i = 0; i < n; i++){
        cin >> x[i] >> y[i];
    }
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    for (int i = 1; i < n; i++){
        sum += (int128_t)(x[i] - x[i - 1]) * i * (n - i);
        sum += (int128_t)(y[i] - y[i - 1]) * i * (n - i);
    }
    print(sum);
}