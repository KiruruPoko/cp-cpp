#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main(){
    vector<int> num(10);
    int counter = 0; 
    for (int i = 0; i < num.size(); i++ ){
        cin >> num[i];
        num[i] = num[i]%42;    
    }
    set<int> unique(num.begin(), num.end());
    cout << unique.size();
}