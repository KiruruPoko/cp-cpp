#include <bits/stdc++.h> 
using namespace std;
typedef long long ll; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int oper = 5;
    int t; 
    vector<int> v(3);
    cin >> t; 
    while (t--){
        for (int i = 0; i < 3; i++){
            cin >> v[i];
        }
        int mul = v[0] * v[1] * v[2];
        for (int i = 0; i < oper; i++){
            sort(v.begin(), v.end());
            v[0]++;
            int update = v[0] * v[1] * v[2];
            mul = max(mul, update);
        }
        cout << mul << "\n";
    }
    return 0; 
}