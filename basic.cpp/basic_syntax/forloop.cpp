#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    float a;
    float p = 10000;  
    float r = .04;
    
    for (int day = 1; day <=20; day++ ){
        a = p * pow(1+r, day);
        cout << a << endl; 
    }
    return 0; 
}