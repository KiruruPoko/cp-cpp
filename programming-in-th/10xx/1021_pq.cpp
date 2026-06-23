#include <bits/stdc++.h>
using namespace std; 
typedef long long ll; 

int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int n; 
    priority_queue<ll> pq; 
    cin >> n; 
    while (n--){
        char cmd;
        cin >> cmd; 
        if (cmd == 'P'){
            int pri; 
            cin >> pri; 
            pq.push(pri);
        }
        else if (cmd == 'Q'){
            if (!pq.empty()){
                cout << pq.top() << '\n';
                pq.pop();
            }
            else cout << -1 << '\n';
        }
    }
    return 0; 
}