#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll a, b; 
    cin>>a>>b;
    ll ans = 0;
    if (a<b) swap(a, b);
    while (b > 0){
        ans += a / b; 
        a %= b;     
        swap(a, b);
    }
    cout << ans - 1 << '\n';
}
/*
instead of working subtraction we calculate all subtraction from b = b - a
until a < b then replace a with a % b (which is a - (n * b)) 
n means number of subtraction to make it true
then swap. 
since we keep until b = 0 we need to subtract ans by 1 because overhead calculation
we assume a > b if not then just swap
*/
