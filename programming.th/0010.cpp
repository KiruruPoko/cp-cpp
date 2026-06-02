#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    string move; 
    cin >> move;
    vector<int> ball_pos = {1, 0, 0};
    for (int i = 0; i < move.size(); i++){
        if (move[i] == 'A'){
            swap(ball_pos[0], ball_pos[1]);
        }
        else if (move[i] == 'B'){
            swap(ball_pos[1], ball_pos[2]);
        }
        else if (move[i] == 'C'){
            swap(ball_pos[0], ball_pos[2]);
        }
    }    
    for (int j = 0; j < ball_pos.size(); j++){
        if (ball_pos[j] == 1){
            cout << j+1; 
        }
    }   
}