#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
const double pi = 3.141592653589793;

int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int n, k;
    int p = 2; // initial
    int count = 0;
    int er = 0;
    cin >> n >> k;
    vector<int> v(n - 1);
    for (int i = 0; i < n - 1; i++) v[i] = i + 2; 
    while (!v.empty()){
        for (int i = 0; i < (int)v.size();){
            if (v[i] % p == 0) {
                count++;
                if (count == k) {
                    cout << v[i] << '\n';
                    return 0; 
                }
                v.erase(v.begin() + i); 
            }
            else i++;
        }
        p = *min_element(v.begin(), v.end());
    }   
    return 0;
}
