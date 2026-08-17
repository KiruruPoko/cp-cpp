#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int h, w; 
int sq[10][10];
int happy_cnt = 0; 
set<int> s;
void search(int i, int j){
    if (i >= h || j >= w){
        return; 
    }
    if (s.count(sq[i][j])) return;
    s.insert(sq[i][j]);
    if (i == h - 1 && j == w - 1) happy_cnt++;
    else {
        search(i + 1, j);
        search(i, j + 1);    
    }
    s.erase(sq[i][j]);
}

int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    cin >> h >> w;
    for (int i = 0; i < h; i++){
        for (int j = 0; j < w; j++){
            cin >> sq[i][j];
        }
    }
    search(0, 0);
    cout << happy_cnt << '\n';
    return 0; 
}