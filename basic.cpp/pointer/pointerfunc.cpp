#include <bits/stdc++.h>
using namespace std;
void increment(int* a){
    *a += 10;
}
int main(){
    int num = 15;
    increment(num);
    cout << num << endl;
    return 0; 
}