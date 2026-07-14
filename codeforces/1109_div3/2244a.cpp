#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int t; 
    cin >> t; 
    while (t--){   
        int n; 
        cin >> n; 
        string s; 
        cin >> s;
        int maxline = 0; 
        int cnt = 0; 
        for (char c: s){
            if (c == '#'){
                cnt++; 
            }            
            else if (c == '*'){
                maxline = max(cnt, maxline);
                cnt = 0; 
            }
        }
        maxline = max(cnt, maxline);
        cout << (maxline / 2) + (maxline % 2) << '\n';
    }
    return 0; 
}