#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; 
    cin >> n; 
    vector<int> line(n);
    int cow = 0; 
    for (int i = 0; i < n; i++) cin >> line[i];
    sort(line.rbegin(), line.rend());
    for (int i = 0; i < n; i++){
        if (line[i] < cow) continue;
        else cow++; 
    }
    cout << cow << '\n';
}
/*
we want minimum number of cow where w[i] = max cow behind. 
Hence, we choose big value first using reverse sort to minimize w that has low value  
*/
