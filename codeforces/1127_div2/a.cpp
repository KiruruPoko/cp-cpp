#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int tt; 
    cin >> tt; 
    while (tt--){
        int n;
        cin >> n;
        vector<int> a(n);
        int sum = 0; 
        for (int i = 0; i < n; i++){
            cin >> a[i];
            if (i % 2 == 0) sum += a[i] * -2; 
            else sum += a[i] * 2;
        } 
        cout << (sum / 2) * -1 << '\n';
    }
}