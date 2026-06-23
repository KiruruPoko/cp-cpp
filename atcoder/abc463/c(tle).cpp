#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; 
    cin >> n;
    vector<ll> h(n); 
    vector<long double> l(n);
    for (int i = 0; i < n; i++) cin >> h[i] >> l[i]; 
    int q; 
    cin >> q; 
    while (q--){
        vector<ll> current; 
        long double mins; 
        cin >> mins; 
        mins += 0.05;
        for (int i = 0; i < n; i++){
            if (l[i] < mins){
                continue;
            }
            else {
                current.emplace_back(h[i]);
            }
        }
        cout << *max_element(current.begin(), current.end()) << '\n';
    }
    return 0;
}