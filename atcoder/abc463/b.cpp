#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<string> s(n); 
    char x; 
    cin >> x;
    int idx;
    bool vacant = false;
    vector<char> seat = {'A', 'B', 'C', 'D', 'E'};
    for (int i = 0; i < 5; i++) {
        if (seat[i] == x) idx = i;
    }
    for (int i = 0; i < n; i++) cin >> s[i];
    for (int i =0; i < n; i++){
        if (s[i][idx] == 'o'){
            vacant = true;
            break; 
        }
    }
    cout << ((vacant)? "Yes": "No") << '\n';
    return 0;
}