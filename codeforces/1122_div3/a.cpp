#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int tt;
    cin >> tt; 
    while (tt--){
        int n;
        cin >> n;
        vector<int> v(3);
        for (int i = 0; i < 3; i++) cin >> v[i];
        int mn = *min_element(v.begin(), v.end());
        cout << abs(n - mn) << "\n";
    }
}