#include <bits/stdc++.h>
using namespace std; 
typedef long long ll; 

int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int n; 
    vector<ll> stock;
    cin >> n; 
    while (n--){
        char cmd; 
        cin >> cmd; 
        if (cmd == 'P'){
            int pri; 
            cin >> pri; 
            stock.emplace_back(pri);
        }
        else if (cmd == 'Q'){
            if (!stock.empty()){
                cout << *max_element(stock.begin(), stock.end()) << '\n';
                stock.erase(max_element(stock.begin(), stock.end()));
            }
            else cout << -1 << '\n';
        }
    }
    return 0; 
}