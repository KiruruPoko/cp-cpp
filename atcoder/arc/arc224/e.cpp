#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int tt; 
    cin >> tt; 
    while (tt--){
        string s; 
        cin >> s; 
        int r = 0;
        stack<char> st; 
        for (char c: s){
            if (c == 'A') st.push(c);
            else if (c == 'B'){
                while (!st.empty() && st.top() != 'A') st.pop();
                if (!st.empty()){
                    st.pop();
                    st.push(c); // A -> AB
                }
                else r++; // not deletable
            }
            else {
                while (!st.empty() && st.top() != 'B') st.pop();
                if (!st.empty()){
                    st.pop();
                    st.push(c); 
                }
                else r++; // not deletable
            }
        }
        cout << r << '\n';
    }
}
