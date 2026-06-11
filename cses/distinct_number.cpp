#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int input;
    set<int> s;
    for (int i = 0; i < n; i++){
         cin >> input;
         s.insert(input);
    }
    cout << s.size() << "\n";
    return 0;
}
