#include <bits/stdc++.h> 
using namespace std; 
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int q;
    priority_queue<int, vector<int>, greater<int>> minheap;
    cin >> q;
    while (q--){
        int query; 
        cin >> query; 
        if (query == 1){
            int x; 
            cin >> x; 
            minheap.push(x);
        }
        else if (query == 2){
            cout << minheap.top() << '\n';
            minheap.pop();
        }
    }
    return 0; 
}