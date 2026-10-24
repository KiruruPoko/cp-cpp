#include <bits/stdc++.h>
using namespace std; 
typedef long long ll; 

int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int n; 
    cin >> n; 
    unordered_map<int, int> p; 
    int shortest = 1e9; 
    for (int i = 0; i < n; i++){
        int a; 
        cin >> a; 
        int d;
        if (p.count(a)) {
            d = i - p[a] + 1;
            shortest = min(shortest, d);
        }
        p[a] = i; 
    }
    cout << (shortest == 1e9? -1: shortest) << '\n';
}