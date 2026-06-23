#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int score[5][4];
    vector<int> sum(5);  
    int maxscore = 0;
    int pos = 0; 
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 4; j++){
            cin >> score[i][j];
        }
    }
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 4; j++){
            sum[i] += score[i][j];
        }
    }
    for (int i = 0; i < 5; i++){
        maxscore = max(maxscore, sum[i]);
        if (maxscore == sum[i]){
            pos = i + 1; 
        }
        else pos = pos;
    }
    cout << pos << " " << maxscore << endl;
}