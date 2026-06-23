#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int num;
    int n = 10;
    set<int> u;
    while (n--){
        cin >> num; 
        u.insert(num % 42);
    }
    cout << u.size() << "\n";
    return 0;
}