#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size;
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
        int div_num = 0; 
        for (int i = 1; i * i <= n; i++){
            if (n % i == 0){
                div_num += i * i == n? 1 : 2; 
            }
        }
        cout << div_num << '\n';
    }
}