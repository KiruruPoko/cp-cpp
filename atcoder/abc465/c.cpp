#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int n; 
    cin >> n; 
    string s; 
    cin >> s;
    vector<int> a(n);
    for (int i = 0; i < n; i++)  a[i] = i + 1;
    for (int k = 0; k < n; k++){
        if (s[k] == 'o'){
            int l = 0;
            int r = k; 
            while (l < r){
                swap(a[l], a[r]);
                l++;
                r--; 
            }
        }
        else continue;
    }
    for (auto &b: a) cout << b << " ";
    cout << '\n';
    return 0;
}
