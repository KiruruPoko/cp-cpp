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
    int n, k; 
    cin >> n >> k; 
    vector<int> A(n);
    for (int i = 0; i < n; i++) cin >> A[i];
    int ans = 0; 
    for (int i = 0; i < n; i++){
        if (A[i] == k){
            if (i == 0 || (i > 0 && A[i - 1] != A[i])) ans++; 
        }
        else if (i > 0){
            if ((A[i - 1] < k && A[i] > k) || (A[i - 1] > k && A[i] < k)) ans++;
        }
    }
    cout << ans << '\n';
}