#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
const double pi = 3.141592653589793;
const ll MOD = 1e9 + 7; 
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    long double maxarea = 0; 
    long double area; 
    for (int i = 0; i < n; i++) cin >> x[i] >> y[i];
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            for (int k = i + 2; k < n; k++){
                area = abs((x[i] * y[j]) + (x[j] * y[k]) + (x[k] * y[i]) - (y[i] * x[j]) - (y[j] * x[k]) - (y[k] * x[i])) * 0.5;
                maxarea = max(maxarea, area);    
            }
        }
    }
    cout << fixed << setprecision(3) << maxarea << '\n';
}
