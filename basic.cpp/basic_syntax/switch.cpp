#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    int age = 21; 
    switch(age){
        case 16: cout << "hey you can drive now!" << endl;
            break; //break the function after case is true
        case 18: cout << "go buy some lottery" << endl;
            break;
        case 21: cout << "buy me some beer" << endl;
            break;
        default: cout << "get good" << endl; 
    }
    return 0;
}