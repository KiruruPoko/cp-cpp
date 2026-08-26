#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
#define pll pair<ll, ll>
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);   
    int n;
    cin >> n;
    stack<char> mazu;
    for (int i = 0; i < n; i++){
        char c;
        cin >> c;
        if (!mazu.empty()){
            if (c == mazu.top()) mazu.pop();
            else mazu.push(c);
        }
        else mazu.push(c);
    }
    if (mazu.empty()){
        cout << 0 << '\n';
        cout << "empty" << '\n';
    }
    else {
        cout << mazu.size() << '\n';
        while (!mazu.empty()){
            cout << mazu.top();
            mazu.pop();
        }
        cout << '\n';
    }
}  
