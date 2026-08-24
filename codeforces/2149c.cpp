#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int tt; 
    cin >> tt; 
    while (tt--){ 
        int n, k; 
        int ans = 0; 
        cin >> n >> k; 
        unordered_map<int, int> freq;
        vector<int> v(n); 
        for (int i = 0; i < n; i++){ 
            int a; cin >> a;
            if (a == k) ans++;
            v[i] = a; 
            freq[a]++;
        }
        int cnt = 0; 
        for (int i = 0; i < k; i++){ 
            if (!freq.count(i)) cnt++;  
            else continue;
        }
        cout << max(cnt, ans) << '\n';
    }
}
