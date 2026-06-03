#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isEven(string n){
    if (n == "2" && n.length() == 1) return false;
    vector<char> setofeven = {'0', '2', '4', '6', '8'};
    for (auto it: setofeven){
        if (n.back() == it){
            return true;
        }
    }
    return false;

}
int main(){
    int N;
    cin >> N;
    vector<string> v(N);
    for (int i = 0; i < N; i++){
        cin >> v[i];
    }  
    for (auto it: v){
        if (!isEven(it)) cout << 'T' << "\n";
        else cout << 'F' << "\n";
    }
}