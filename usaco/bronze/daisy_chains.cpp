#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    int count = 0;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++) cin >> p[i];

    for (int i = 0; i < n; i++){
        for (int j = i; j < n; j++){
            double avg_petals = 0; 
            for (int f = i; f <= j; f++) avg_petals += p[f];
            avg_petals /= j - i + 1;
            for (int index = i; index <= j; index++){
                if (p[index] == avg_petals) {
                    count++;
                    break;
                }
            }
        }
    }
    cout << count << "\n";
}
