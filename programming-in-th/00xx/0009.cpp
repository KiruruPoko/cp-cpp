#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

const int n = 3;
string tx;
int main(){
    vector<int> num(n);
    for (int i = 0; i < n; i++) cin >> num[i];
    sort(num.begin(), num.end());
    cin >> tx;
    for (char c: tx){
        if (c == 'A' || c == 'a'){
            cout << num[0] << " ";
        }
        else if (c == 'B' || c == 'b'){
            cout << num[1] << " ";
        }
        else cout << num[2] << " ";
    }
    return 0;
}