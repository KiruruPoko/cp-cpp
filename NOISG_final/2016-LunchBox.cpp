#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 

int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int n, m;
    cin >> n >> m;  
    vector<int> k(m);
    int sum = 0; 
    int cnt = 0; 
    for (int i = 0; i < m; i++){
        cin >> k[i];
    }
    sort(k.begin(), k.end());
    for (auto &a: k){
        sum += a; 
        if (sum > n) {
            break; 
        }
        cnt++; 
    }
    cout << cnt << '\n';    
}