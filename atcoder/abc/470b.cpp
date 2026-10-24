#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int n; 
    cin >> n; 
    unordered_map<int, int> freq; 
    int max_f = 0; 
    for (int i = 0; i < n; i++){
        int a;
        cin >> a; 
        freq[a]++; 
        if (freq[a] > max_f) max_f = freq[a]; 
    }
    cout << n - max_f << '\n';
    return 0; 
}
