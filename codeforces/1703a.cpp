#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

bool checkY(char c){
    if (c == 'Y' || c == 'y') return true; 
    else return false;
}
bool checkE(char c){
    if (c == 'E' || c == 'e') return true; 
    else return false;
}
bool checkS(char c){
    if (c == 'S' || c == 's') return true; 
    else return false;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    string str;  
    while (t--){
        cin >> str; 
        if (checkY(str[0]) && checkE(str[1]) && checkS(str[2])) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
}