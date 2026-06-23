#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
const double pi = 3.141592653589793;
const ll MOD = 1e9 + 7; 
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int n; 
    cin >> n;
    n *= 2;
    vector<int> w(n);
    int diff; 
    for (int i = 0; i < n; i++) cin >> w[i];
    sort(w.begin(), w.end());
    int min_insta = INT32_MAX;
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            vector<int> new_ppl;
            for (int p = 0; p < n; p++){
                if (p != i && p != j) new_ppl.emplace_back(w[p]);
            }
            int total = 0; 
            for (int p = 0; p < n - 2; p += 2){
                total += abs(new_ppl[p + 1] - new_ppl[p]);
            }
            min_insta = min(total, min_insta);
        }
    }
    cout << min_insta << '\n';
    return 0;
}
