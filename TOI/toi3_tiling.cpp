#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int n; 
    cin >> n; 
    int tiling[19][19];
    int ans = 0; 
    unordered_map<int, int> cnt; 
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cin >> tiling[i][j];
        }
    }    
    
}