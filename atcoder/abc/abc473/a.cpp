#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int n; 
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int latter = n / 2; 
    int sum = 0; 
    for (int i = latter; i < n; i++) sum += a[i];
    cout << sum << '\n';
}
