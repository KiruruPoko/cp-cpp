#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    char p, q; 
    cin >> p >> q; 
    vector<int> v = {0, 3, 1, 4, 1, 5, 9};
    vector<int> pre(7); 
    for (int i = 0; i < 7; i++){
        if (i == 0) pre[i] = v[i];
        else pre[i] = v[i] + pre[i - 1];
    }
    cout << abs(pre[(int)(p - 'A')] - pre[(int) (q - 'A')]) << '\n';
    return 0;
}
