#include <iostream> 
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

int mx = -1e9;

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0);
    int N;
    cin >> N;
    vector<int> x(N);
    vector<int> y(N);
    for (int i = 0; i < N; i++){cin >> x[i];}
    for (int i = 0; i < N; i++) cin >> y[i];

    int x1, x2, y1, y2, d;

    for(int i = 0; i < N; i++){
        x1 = x[i], y1 = y[i];
        for(int j = i+1; j < N; j++){
            x2 = x[j], y2 = y[j];
            d = pow((x1-x2), 2) + pow((y1-y2),2);
            mx = max(d, mx);
        }
    }

    cout << mx;
    
}