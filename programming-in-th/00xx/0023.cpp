#include <bits/stdc++.h>
using namespace std;
int main(){
    string day[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    int dom[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int d, m;
    int dtotal = 0;
    int idx;

    cin >> d >> m;
    for (int i = 0; i < m - 1; i++){
        dtotal += dom[i];
    }
    idx = (dtotal + d + 3) % 7; 
    cout << day[idx] << "\n";
    return 0;
}