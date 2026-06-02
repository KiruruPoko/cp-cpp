#include <bits/stdc++.h>
using namespace std;

int main(){
    int number = 10;
    int *ptr = &number;
    cout << &number << endl; // pointer at address of variable in ram 
    cout << *ptr << endl; //* pointer variable -> reverse and get value

    number = 20;
    cout << number << endl;
    cout << *ptr << endl;

    *ptr = 30; // can be reference back to where pointer point at -> number = 30
    cout << number << endl; 
    cout << *ptr << endl;
    return 0;
}