#include <bits/stdc++.h>
using namespace std; 
typedef long long ll; 

int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int n;
    cin >> n;
    int m_sq[n][n];
    set<int> value;
    set<int> unique_sum;
    int sum_d = 0, sum_rd = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> m_sq[i][j];
            if (m_sq[i][j] < 1 || m_sq[i][j] > n * n){
                cout << "No" << '\n';
                return 0; 
            }
            value.insert(m_sq[i][j]);
        }
    }
    if ((int)value.size() != n * n) {
        cout << "No" << '\n';
        return 0; 
    }
    
    for (int i = 0; i < n; i++){
        int sum_v = 0; 
        for (int j = 0; j < n; j++){
            sum_v += m_sq[i][j];
        }
        unique_sum.insert(sum_v);
    }
    for (int j = 0; j < n; j++){
        int sum_h = 0; 
        for (int i = 0; i < n; i++){
            sum_h += m_sq[i][j];
        }
        unique_sum.insert(sum_h);
    }
    for (int i = 0; i < n; i++){
        sum_d += m_sq[i][i];
    }
    unique_sum.insert(sum_d);

    for (int i = 0; i < n; i++){
        sum_rd += m_sq[i][n - 1 - i];
    }
    unique_sum.insert(sum_rd);
    cout << (((int)unique_sum.size() == 1)? "Yes": "No") << '\n';
    return 0;
}