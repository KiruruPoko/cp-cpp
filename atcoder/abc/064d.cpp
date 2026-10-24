#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int n; 
    string s;
    cin >> n;  
    cin >> s;
    int balance = 0; 
    int add_front = 0; 
    for (int i=0; i<n; i++){
        if (s[i] == '(') {
            balance++; 
            
        }
        else {
            if (balance > 0) balance--; 
            else add_front++;
        }
    }
    for (int i = 0; i < add_front; i++) cout << '(';
    cout << s; 
    for (int i = 0; i < balance; i++) cout << ')';
    cout << '\n';
}
/*
count '(' and ')' that isn't a pair
then add the opposite follow the number of that char by adding '(' to the front and ')' to the back
*/
