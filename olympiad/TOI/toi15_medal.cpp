#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int n; 
    cin >> n; 
    vector<int64_t> programmer(n); 
    vector<int64_t> podium(n); 
    vector<int64_t> combined; 
    int64_t sum = 0; 
    for (int i = 0; i < n; i++){ 
        cin >> programmer[i]; 
    }
    for (int i = 0; i < n; i++){ 
        cin >> podium[i]; 
    }
    sort(programmer.rbegin(), programmer.rend());
    sort(podium.begin(), podium.end()); 
    for (int i = 0; i < n; i++){ 
        int64_t real_h = programmer[i] + podium[i];
        combined.emplace_back(real_h); 
    }
    sort(combined.rbegin(), combined.rend()); 
    for (int i = 0; i < n - 1; i++){ 
        sum += abs(combined[i] - combined[i + 1]); 
    }
    cout << sum << '\n';
}
