#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> x(n) , y(n);
    int maxArea = 0;
    int area; 
    for (int i = 0; i < n; i++) cin >> x[i] >> y[i];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            for (int k = 0; k < n; k++){
                if (y[i] == y[j] && x[i] == x[k]){ // check whether it is triangle or not
                    area = abs((x[j] - x[i]) * (y[k] - y[i])); // 2 * area (width * height)
                    maxArea = max(maxArea, area); 
                }
                maxArea = max(maxArea, area); 
            }
        }
    }
    cout << maxArea << "\n";

}
