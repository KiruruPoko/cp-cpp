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
        deque<int> dq; 
        for (int i = 0; i < n; i++) {
            int a; 
            cin >> a;
            dq.push_back(a);
        }
        for (int i = 1; i <= n; i++){
            if (i % 2 == 0){
                if (dq.front() < dq.back()){
                    dq.pop_front();
                    cout << "L";
                }
                else {
                    dq.pop_back();
                    cout << "R";
                }
            }
            else {
                if (dq.front() > dq.back()){
                    dq.pop_front();
                    cout << "L";
                }
                else {
                    dq.pop_back();
                    cout << "R";
                }
            }
        }
        cout << '\n';
    }
}  
