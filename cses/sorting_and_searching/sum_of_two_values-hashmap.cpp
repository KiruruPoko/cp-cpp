#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int n;
    int target; 
    cin >> n >> target;
    map<int, int> sets; // cses has anti hash T_T
    for (int i = 1; i <= n; i++){
        int v;
        cin >> v; 
        if (sets.count(target - v)){
            cout << i << " " << sets[target - v] << '\n';
            return 0; 
        }
        sets[v] = i;
    }
    cout << "IMPOSSIBLE" << '\n';
    return 0; 
}