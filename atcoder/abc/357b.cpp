#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
#define all(x) begin(x), end(x) 
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int upper = 0; 
    int lower = 0; 
    string s; 
    cin >> s; 
    for (char c: s) { 
      if (isupper(c)) upper++; 
      else lower++;
    }
    if (upper > lower){
      for (char &c: s) c = toupper(c);
    }
    else for (char &c: s) c = tolower(c);
    cout << s << '\n';
}