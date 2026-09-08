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
        unordered_map<char, int> freq; 
        set<char> letter;
        string s;
        cin >> s; 
        int mx = 0;
        char most;
        int mn = 11; 
        char minor;  
        for (char c: s) {
            freq[c]++;
            letter.insert(c);
            if (freq[c] > mx){
                mx = freq[c]; 
                most = c; 
            }
        }
        for (auto &a: letter){
            if (freq[a] < mn){
                mn = freq[a];
            }
        }
        for (char &c: s){
            if (mx == mn){
                for (int i = n - 1; i >= 0; i--){
                    if (c != s[i]){
                        c = s[i];
                        break; 
                    }
                }
                break;
            }
            else if (freq[c] == mn){ 
                c = most; 
                break;
            }
        }
        cout << s << '\n';
    }  
}
