#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
#define pic pair<int, char> 
#define f first 
#define s second
bool tiled[300005];
vector<pic> prev_c(300005, {0,'a'}); // use when remove tiled 
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int n, q; 
    cin >> n >> q; 
    vector<char> sq(n + 1, 'a'); 
    vector<pic> color;
    color.emplace_back(0, 'a');
    for (int i = 1; i <= q; i++){
        int cmd; 
        cin >> cmd; 
        if (cmd == 1){
            int a;
            cin >> a; 
            if (!tiled[a]){
                tiled[a] = true; 
                sq[a] = color.back().s; 
            }
            else {
                tiled[a] = false; 
                prev_c[a] = {i, sq[a]};
            }
        }
        if (cmd == 2){
            char paint; 
            cin >> paint;
            color.push_back({i, paint});
        }
    }
    for (int i = 1; i <= n; i++){
        if (tiled[i]) cout << sq[i];
        else {
            if (color.back().f > prev_c[i].f) cout << color.back().s; 
            else cout << prev_c[i].s;
        }
    }
    cout << '\n';
}
