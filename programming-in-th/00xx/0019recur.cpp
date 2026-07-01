#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct perket{
    int s; 
    int b;
};

int n; 
vector<perket> p; 
ll ans = INT64_MAX;

void search(int idx, ll product, ll sum, bool used){
    if (idx == n){
        if (used){
            ans = min(ans, abs(product - sum));
        }
        return;
    }
    search(idx + 1, product * p[idx].s, sum + p[idx].b, true); // used
    search(idx + 1, product, sum, used); // skip
}
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    cin >> n;
    p.resize(n);
    for (int i = 0; i < n; i++){
        cin >> p[i].s >> p[i].b;
    }
    search(0, 1, 0, false);
    cout << ans << '\n';
}