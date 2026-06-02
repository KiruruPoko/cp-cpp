#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    vector <long long> montmort(N + 1);
    montmort[1] = 0;
    if (N >= 2) montmort[2] = 1;
    for (int i = 3; i <= N; i++){
        montmort[i] = (i - 1) % M * (montmort[i - 1] + montmort[i - 2] % M) % M;
    }

    for (int i = 1;  i < montmort.size(); i++){
        cout << montmort[i] << " ";
    }
    return 0;
}