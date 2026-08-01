#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int tt; 
    cin >> tt; 
    while (tt--){ 
        string s; 
        cin >> s; 
        vector<char> ans;
        bool del0 = false, del1 = false; 
        for (int i = 0; i < (int)s.length(); i++){
            if (s[i] == '0'){
                if (!del0){
                    del0 = true;
                    continue; 
                }
                else ans.push_back(s[i]);
            }
            else if (s[i] == '1'){
                if (!del1){
                    del1 = true; 
                    continue; 
                }
                else ans.push_back(s[i]); 
            }
        }
        for (auto &a: ans) cout << a; 
        cout << '\n';
    }
}