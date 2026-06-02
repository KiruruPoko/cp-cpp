#include <bits/stdc++.h>
using namespace std;

int factorial(int b){
    int total = 1; 
    for (int n = 2; n <= b; n++){
        total *= n; 
    }
    return total; 

}
int main()
{
    cout << factorial(3); 
    return 0;
}