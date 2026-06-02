#include <bits/stdc++.h>
using namespace std;

void printSomething(); //don't want function to return any value

int main() 
{
    printSomething();
    return 0; //tell the function that it ran fine, no error 
}

void printSomething() //don't want function to return any value
{
    cout << "hi" << endl;
}