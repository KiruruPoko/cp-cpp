#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int mx = 0;
  unordered_map<string, int> freq;
  for (int i = 0; i < n; i++){
    string s; cin >> s;
    for (char &c: s){
      c = tolower(static_cast<unsigned char>(c));
    }
    freq[s]++;
    mx = max(mx, freq[s]);
  }
  cout << mx << '\n';
}
