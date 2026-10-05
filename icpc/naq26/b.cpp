#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int n; 
    cin >> n;   
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    int ans = 0; 
    for (int i = 0; i < n - 2; i++){
        int l = i; 
        int r = l + 2; 
        int a = v[l];
        int b = v[l + 1];
        int c = v[r];
        cout << a << " " << b << " " << c << " " << "Current ans: " << ans << "\n";
        if (b - a > c - b) ans++; 
    }
    cout << ans << '\n';
}