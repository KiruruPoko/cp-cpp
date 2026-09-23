#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt; 
    while (tt--){
        int n; 
        cin >> n; 
        string s;
        cin >> s; 
        bool sorted = true; 
        for (int i = 0; i < n - 1; i++){
            if (s[i] == '1' && s[i + 1] == '0') sorted = false; 
        }
        int cnt = 0; 
        if (!sorted){
            for (int i = 1; i < n; i++){
                if (s[0] == '1'){
                    if (s[i] == '0'){
                        s[i] = '1';
                        cnt++;
                    } 
                }
                else {
                    if (i == n - 1){
                        if (s[i] == '0' && s[i - 1] == '1') {
                            s[i] = '1';  
                            cnt++; 
                        }
                    }
                    else { 
                        if (s[i] == '1'){
                            if (s[i + 1] == '0' && s[i - 1] == '0') {
                                s[i] = '0'; 
                                cnt++;
                            }
                        }
                        else if (s[i] == '0'){
                            if (s[i + 1] == '1' && s[i - 1] == '1'){
                                s[i] = '1';
                                cnt++;  
                            }
                        }
                    }
                }
            }
        }
        cout << cnt << '\n';    
    }
}
/*
>:( 01100 most optimal -> 00000 what we got right now -> 01100
maybe focus on min(0, 1)?
*/