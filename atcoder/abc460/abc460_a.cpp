#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, M; 
    int count = 0;
    int result;
    cin >> N >> M; 
    while (M != 0){
        M = N % M; 
        count++; 
    }
    cout << count << "\n";
    return 0; 
}