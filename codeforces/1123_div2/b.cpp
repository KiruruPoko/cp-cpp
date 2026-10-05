#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int tt; 
    cin >> tt; 
    while (tt--){
        int n; 
        cin >> n; 
        vector<int> v;
        map<int, int> cnt;    
        set<int, greater<int>> s; 
        int mx_cnt = 0;
        for (int i = 0; i < n; i++){
            int a; 
            cin >> a; 
            v.emplace_back(a);
            cnt[a]++; 
            if (cnt[a] > mx_cnt) mx_cnt = cnt[a];
            s.insert(a);
        }
        for (int i = 0; i < mx_cnt; i++){
            for (auto &num: s) { 
                if (cnt[num] > 0){
                    cout << num << " ";
                    cnt[num]--; 
                }
            }
        }
        cout << '\n';
    }
}
