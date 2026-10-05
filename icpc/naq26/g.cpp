#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size;
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int tt; 
    cin >> tt; 
    while (tt--){
        int n, q, g; 
        cin >> n >> q >> g; 
        unordered_map<ll, ll> recent; 
        unordered_map<ll, ll> cnt; 
        while (q--){
            char cmd; 
            cin >> cmd; 
            if (cmd == 'P'){ 
                int s; 
                int a; 
                cin >> s >> a; 
                for (int i = 0; i < a; i++){
                    int p; 
                    cin >> p; 
                    if (recent[p] != s){
                        cnt[recent[p]]--; 
                        if (cnt[recent[p]] < 0) cnt[recent[p]] = 0; 
                        recent[p] = s; 
                        cnt[s]++;
                    }
                    else continue; 
                }
            }
            else if (cmd == 'Q'){
                int s;  
                cin >> s; 
                cout << cnt[s] << '\n';
            }
        }        
    }
}