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
    int n; 
    cin >> n; 
    deque<ll> A(n / 2); 
    int ans = 0; 
    for (auto &a: A) cin >> a; 
    for (int i = n / 2; i < n; i++){
        ll b; 
        cin >> b; 
        if (A.front() * 2 <= b){
            ans++; 
            A.pop_front();
        }
    }
    cout << ans << '\n';
}