#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds; 
typedef long long ll;
typedef tree<pair<int, int>, null_type, less_equal<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update> ordered_set; 
const double pi = 3.141592653589793;
const ll MOD = 1e9 + 7; 
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    ordered_set s; 
    int n; 
    cin >> n;
    int x;
    for (int i = 0; i < n; i++){
        cin >> x;
        s.insert({i, x});
    } 
    int q; 
    while (n--){
        int id; 
        cin >> id; 
        auto it = s.find_by_order(id - 1); 
        cout << it -> second << '\n';
        s.erase(*it);
    }
    return 0; 
}

