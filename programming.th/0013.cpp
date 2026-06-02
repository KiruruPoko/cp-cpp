#include <iostream>
#include <vector> 
#include <algorithm>
using namespace std;

int main(){
    vector<int> dwarf(9);
    int sum = 0;
    for (int i = 0; i < dwarf.size(); i++){
        cin >> dwarf[i];
        sum += dwarf[i];
    }
    int fake_sum = sum - 100; 
    for(int i = 0; i < 9; i++){
        for (int j = i+1; j < 9; j++){
            if (dwarf[i] + dwarf[j] == fake_sum){
                dwarf.erase(dwarf.begin()+j);
                dwarf.erase(dwarf.begin()+i);
            }
        }
    }
    for (auto &a: dwarf){
        cout << a << endl;
    }
}