#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

struct runner {
    int speed;
    int lane;
    int num;
};

struct cmp {
    bool operator()(const runner& a, const runner& b) const {
        if (a.speed != b.speed)
            return a.speed < b.speed;   

        return a.lane > b.lane;       
    }
};
using pq = priority_queue<runner, vector<runner>, cmp>;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int n, m; 
    cin >> n >> m; 
    vector<int> cnt(m + 1, 0);
    vector<pq> rounds(n);
    for (int i = 0; i < n; i++){ 
        int num, lane, spd; 
        cin >> num >> lane >> spd;
        int rnd = cnt[lane]++; 
        rounds[rnd].push({spd, lane, num});
    }
    for (int i = 0; i < n; i++) {
        if (!rounds[i].empty()){
            cout << rounds[i].top().num << '\n'; 
        }
        else break; 
    }
}
