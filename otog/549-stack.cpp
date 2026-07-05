#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int n; 
    cin >> n; 
    stack<int> st; 
    while (n--){
        string s; 
        cin >> s;
        if (s == "push"){
            int i; 
            cin >> i; 
            st.push(i);
        }
        if (s == "pop"){
            if (!st.empty()){
                cout << st.top() << '\n';
                st.pop();
            }
            else cout << "null" << '\n';
        }
    }
    return 0; 
}
