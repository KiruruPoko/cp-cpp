#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int n; 
    cin >> n; 
    vector<int> v(n);
    int sum = 0; 
    for (int i = 0; i < n; i++){
        cin >> v[i];
        sum += v[i];
    }   
    sort(v.begin(), v.end());
    if (sum % 10 == 0){
        for (int i = 0; i < n; i++){
            if (v[i] % 10 != 0) {
                sum -= v[i];
                cout << sum << '\n';
                return 0; 
            }
        }
        cout << 0 << '\n';
        return 0; 
    }
    cout << sum << '\n';
}
