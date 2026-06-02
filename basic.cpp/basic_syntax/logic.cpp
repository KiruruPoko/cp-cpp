#include <bits/stdc++.h>
using namespace std; 
int main(){
    int age; 
    int money;
    cin >> age >> money;
    if (age > 21 && money >= 500){ //&& -> and
        cout << "You are allowed" << endl; 
    }
    else if (age > 21 || money >= 500){// || -> or
        cout << "Please go visit economy class" << endl;
    }
    return 0;
}