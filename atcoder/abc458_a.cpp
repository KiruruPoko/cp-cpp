#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    int n;
    cin >> s;
    cin >> n;
    for (int i = 0; i < n; i++){
        s.erase(0, 1);
        s.pop_back();
    }
    cout << s << endl;
    return 0;
}