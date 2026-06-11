#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; 
    cin >> n; 
    vector<string> joke(n);
    for (int i = 0; i < n; i++){
        cin >> joke[i];
    }
    sort(joke.begin(), joke.end());
    set<string>jok (joke.begin(), joke.end());
    for (auto c: jok) cout << c << "\n";
    return 0; 
}