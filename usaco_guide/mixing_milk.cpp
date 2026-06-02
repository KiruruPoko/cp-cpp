#include <vector>
#include <iostream>
using namespace std;

const int N = 3;
int turn_num;

int main(){
    cin >> turn_num;
    vector<int> capacity(N);
    vector<int> milk(N);

    for (int i = 0; i < N; i++){cin >> capacity[i] >> milk[i];}
    for (int i = 0; i < turn_num; i++){
        int bucket1 = i % N;
        int bucket2 = (i+1) % N;

        int amt = min(milk[bucket1], capacity[bucket2] - milk[bucket2]);
        milk[bucket1] -= amt;
        milk[bucket2] += amt;
    }
    for (int m: milk) {cout << m << endl;}
    return 0; 
}