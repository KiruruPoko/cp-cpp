#include <bits/stdc++.h> 
using namespace std; 
typedef long long ll; 

int find_max2(ll a){
    int cnt = 0;
    while (a >= 2){
        a /= 2; 
        cnt++; 
    }
    return cnt; 
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll x, y;
    cin >> x >> y; 
    y /= x;
    int sz_a = 1; 
    sz_a += find_max2(y);
    cout << sz_a << '\n';
}
/*
3 45
find_max2(45 / 3)
15 / 2 -> 7 cnt = 1
7 / 2 -> 3 cnt = 2
3 / 2 -> 1 cnt = 3
1 / 2 -> 0 cnt = 4
*/