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
        string s; 
        cin >> n; 
        cin >> s; 
        int one = 0;
        int mx_cont = 0;  
        for (char c: s){ 
            if (c == '1') one++; 
        }
        if (one >= n){
            for (int i = 0; i < n; i++) cout << '1';
            cout << '\n';
        }
        else {
            for (int i = 0; i < n; i++) cout << '0';
            cout << '\n';
        }
    }
}   