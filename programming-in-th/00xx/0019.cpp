#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N;
    cin >> N; 
    vector<long long> S(N);
    vector<long long> B(N);

    for (int i = 0; i < N; i++){
        cin >> S[i] >> B[i];
    }
    long long ans = LLONG_MAX;
    
    for (int mask = 1; mask < (1 << N); mask++){
        long long product = 1; 
        long long sum = 0; 

        for(int i = 0; i < N; i++){
            if (mask & (1 << i)){
                product = product * S[i];
                sum = sum + B[i];
            }
        }
        long long diff = abs(product - sum);
        ans = min(ans, diff);
    }
    cout << ans << endl;
    return 0; 
}