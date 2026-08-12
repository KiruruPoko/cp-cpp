#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
#define ull unsigned long long
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    ull n, k; 
    cin >> n >> k; 
    ull sum;
    if (k % 2 == 0) sum = (1 + k) * k / 2;
    if (k % 2 != 0) sum = (k + 1) / 2 * k;
    unordered_map<ull, bool> used;
    for (int i = 0; i < n; i++){
        ull a; 
        cin >> a; 
        if (a <= k){
            if (!used[a]) {
                sum -= a;
                used[a] = true;     
            }
        }
    }
    cout << sum << '\n';
}