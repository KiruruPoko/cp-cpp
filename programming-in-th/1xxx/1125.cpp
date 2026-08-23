#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
#define pii pair<int, int>

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int n; 
    cin >> n; 
    ll sum = 0; 
    vector<pii> point(n); 
    for (int i = 0; i < n; i++) cin >> point[i].first >> point[i].second; 
    for (int l = 0; l < n; l++){
        for (int r = l + 1; r < n; r++){
            sum += abs(point[l].first - point[r].first) + abs(point[l].second - point[r].second); 
        }
    }
    cout << sum << '\n';
}