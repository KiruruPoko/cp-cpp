#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    int max_count = 0;
    vector<int> v(n); 
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++){
        int count = 1; // initial
        for (int j = i + 1; j < n; j++){
            if (abs(v[i] - v[j]) <= k) count++; 
        }
        max_count = max(max_count, count);
    }
    cout << max_count << "\n";
}
