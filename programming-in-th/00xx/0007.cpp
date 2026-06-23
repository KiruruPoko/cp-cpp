#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    int r;
    cin >> r;
    cout << fixed << setprecision(6);
    cout << M_PI * pow(r, 2)  << endl;
    cout << 2 * pow(r, 2) << endl;
}
