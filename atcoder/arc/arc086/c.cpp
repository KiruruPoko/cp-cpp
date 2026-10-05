#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
#define all(x) begin(x), end(x)

const int INF = 1e9;
vector<int> cnt(200005, INF);
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int n, k; 
    cin >> n >> k;
    set<int>uniq; 
    for (int i = 0; i < n; i++){
        int a; 
        cin >> a; 
        if (cnt[a] == INF){
            cnt[a] = 1; 
        }
        else cnt[a]++;
        uniq.insert(a);
    }
    if (uniq.size() <= k) cout << 0 << '\n';
    else {
        sort(all(cnt));
        int remove = 0; 
        for (int i = 0; i < (int)uniq.size() - k; i++){
            remove += cnt[i];
        }
        cout << remove << '\n';
    }
}