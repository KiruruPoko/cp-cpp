#include <bits/stdc++.h> 
using namespace std;
typedef long long ll; 

bool isforbid(int i, const vector<int>& v){ 
    return find(v.begin(), v.end(), i) != v.end();
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m; 
    cin >> n >> m; 
    vector<int> elm(n);
    vector<int> forbid(m);
    for (int i = 0; i < n; i++) elm[i] = i+1;
    for (int i = 0; i < m; i++) cin >> forbid[i];
    do {    
        if (isforbid(elm[0], forbid)) continue;
        else {
            for (auto &x: elm){
                cout << x << " ";
            }
            cout << "\n";
        }
    } while (next_permutation(elm.begin(), elm.end()));
    return 0; 
}