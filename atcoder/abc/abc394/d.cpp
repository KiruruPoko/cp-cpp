#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
#define rep(i,n) for (ll i = 0; i < (n); i++)
#define rrep(a, b) for (ll j = (a); j >= (b); --j)
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);
    string s; 
    cin >> s; 
    int n = (int)s.size(); 
    stack<char> st; 
    rep(i, n){
        if (!st.empty()){
            if (s[i] == '>'){
                if (st.top() == '<') st.pop(); 
                else st.push(s[i]); 
            }
            else if (s[i] == ']'){
                if (st.top() == '[') st.pop(); 
                else st.push(s[i]);
            }
            else if (s[i] == ')'){
                if (st.top() == '(') st.pop();
                else st.push(s[i]); 
            }
            else st.push(s[i]);
        }
        else st.push(s[i]); 
    }
    cout<<(st.empty()? "Yes": "No")<<'\n';
}
