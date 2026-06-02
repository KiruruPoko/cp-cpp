#include <iostream>
#include <cctype>
using namespace std;

int main(){
    string text;
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
    else if (acl){
        cout << "All Capital Letter";
    }
    else cout << "All Smaller Letter";
    return 0;
}