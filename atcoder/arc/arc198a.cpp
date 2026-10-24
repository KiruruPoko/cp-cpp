#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int N; 
    cin >> N; 
    set<int> uniq; 
    int start;
    if (N <= 2) start = N; 
    else start = 2;
    for (int i = start; i <= N; i += 2){
        uniq.insert(i); 
    }
    cout << uniq.size() << '\n';
    for (auto &a: uniq) cout << a << " "; 
    cout << '\n';
}
