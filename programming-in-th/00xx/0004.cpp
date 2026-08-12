#include <bits/stdc++.h>
using namespace std;
string text;
int main(){
    cin >> text;
    bool acl = false;
    bool asl = false;
    for (char c: text){
        if (isupper(c)){
            acl = true;
        }
        else if (islower(c)){
            asl = true;
        }
    }
    if (asl && acl){
        cout << "Mix";
    }
    else {
        if (acl && !asl) cout << "All Capital Letter";
        else cout << "All Small Letter";
    }
    return 0;
}