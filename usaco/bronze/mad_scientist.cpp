#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int n;
    string a, b; 
    cin >> n; 
    cin >> a >> b; 
    int cnt = 0; 
    bool mm = false; 
    for (int i = 0; i < n; i++){
        if (a[i] != b[i]){
            if (!mm){
                mm = true; 
                cnt++;
            }
        }
        else mm = false;
    }
    cout << cnt << '\n';
}

