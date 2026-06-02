#include <bits/stdc++.h>
using namespace std;

int GCD(long a, long b){
    if (a == 0){
        return b; 
    }
    return GCD(b%a, a);
}
int main(){
    long a,b; 
    cin >> a >> b;
    cout << GCD(a, b);
    return 0;
}