#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    int input; 
    int miss = 0; 
    int sigma = 0;
    cin >> n;
    if (n % 2 == 0) sigma = (n + 1) * (n / 2);
    else sigma = (n + 1) * (n / 2) + ((n / 2) + 1);   

    for (int i = 0; i < n - 1; i++){
        cin >> input; 
        miss += input; 
    }
    cout << sigma - miss << endl;
    return 0;
}
