#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;

int main(){
    str a, b; 
    char op;
    cin >> a; 
    cin >> op; 
    cin >> b; 
    if (op == '*'){
        for (int i = 0; i < b.length() - 1; i++){
            a += '0';
        }
        cout << a;
    }
    else if (op == '+'){
        if (a.length() < b.length()){
            b[(b.length() - a.length())] = '1';
            cout << b;
        }
        else if (a.length() > b.length()) {
            a[(a.length() - b.length())] = '1';
            cout << a; 
        }
        else {
            a[0] = '2';
            cout << a; 
        }

    }   
    return 0;
}