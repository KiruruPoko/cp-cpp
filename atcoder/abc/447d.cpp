#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    string s; 
    cin >> s; 
    int n = s.length();
    int a = 0, b = 0, c = 0;
    for (int i = 0; i < n; i++){
        if (s[i] == 'A') a += 1; 
        if (s[i] == 'B') b = min(a, b + 1);
        if (s[i] == 'C') c = min(b, c + 1);
    }
    cout << c << '\n';
}

/*
we count how many a that b can used to form ab then we count how many ab that c can used to form
abc then print it.
*/