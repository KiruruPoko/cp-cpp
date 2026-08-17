#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int m, d;
    vector<int> hld(12 + 1);
    hld[1] = 7;
    hld[3] = 3;
    hld[5] = 5;
    hld[7] = 7;
    hld[9] = 9;
    cin >> m >> d; 
    cout << ((d == hld[m])? "Yes": "No") << '\n';
    return 0;
}