#include <bits/stdc++.h>
using namespace std; 
typedef long long ll; 

int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int n; 
    cin >> n; 
    vector<int> count(10001, 0);
    vector<int> looblike(n);
    vector<int> max_count;
    for (int i = 0;  i < looblike.size(); i++) {
        cin >> looblike[i];
        count[looblike[i]]++;
    }
    int m = *max_element(count.begin(), count.end());
    for (int i = 0; i < count.size(); i++){
        if (count[i] == m) max_count.emplace_back(i);
    }
    sort(max_count.begin(), max_count.end());
    for (auto &s: max_count) cout << s << " ";  
    return 0;
}