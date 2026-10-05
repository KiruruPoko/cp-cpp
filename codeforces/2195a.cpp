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
        bool sixseven = false; 
        for (int i = 0; i < n; i++){
            int a; 
            cin >> a; 
            if (a == 67) sixseven = true; 
        }
        cout << ((sixseven)? "YES": "NO") << '\n';
    }
}