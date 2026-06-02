#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int repeat = 1;
    vector<int> n;
    string txt; 
    cin >> txt;
    for (int i = 1; i < txt.length(); i++){
        if (txt[i] == txt[i-1]) repeat++;
        else {
            n.push_back(repeat);
            repeat = 1;
        }
    }
    n.push_back(repeat);
    auto result = max_element(n.begin(), n.end());
    cout << *result << endl;
    return 0;
}