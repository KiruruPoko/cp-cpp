#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int DIM = 8;
vector<vector<bool>> blocked(DIM, vector<bool>(DIM)); 
vector<bool> row_taken(DIM);
vector<bool> diag1(DIM * 2 - 1); // bottom left -> top right
vector<bool> diag2(DIM * 2 - 1); // bottom right -> top left
int valid_num = 0;

void search_queens(int c = 0){
    if (c == DIM){
        valid_num++;
        return;
    }
    for (int r = 0; r < DIM; r++){
        bool row_open = !row_taken[r];
        bool diag_open = !diag1[r + c] && !diag2[r - c + DIM - 1];
        if (!blocked[r][c] && row_open && diag_open){
            row_taken[r] = diag1[r + c] =  diag2[r - c + DIM - 1] = true;
            search_queens(c + 1);
            row_taken[r] = diag1[r + c] = diag2[r - c + DIM - 1] = false;
        }
    }
}
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    for (int r = 0; r < DIM; r++){
        string row; 
        cin >> row;
        for (int c = 0; c < DIM; c++) blocked[r][c] = row[c] == '*';
    }
    search_queens();
    cout << valid_num << endl; 
}