#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
#define rep(i,n) for (ll i = 0; i < (n); i++)

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);
    ll n; 
    cin >> n; 
    ll cnt = 0; 
    for (ll i = 1; i * i <= n; i += 2){ 
        ll p = 2; 
        while (i * i * p <= n){
            cnt++; 
            p *= 2; 
        }
    }   
    cout<<cnt<<'\n'; 
}
