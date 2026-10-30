#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int m, n; 
    cin >> m >> n; 
    string word[m];
    char puzzle[m][n];
    for (int i = 0; i < m; i++) cin >> word[i];
    for (int i = 0; i < m; i++){
       for (int j = 0; j < n; j++){
        puzzle[i][j] = tolower(word[i][j]);
       }
    }
    int k; 
    cin >> k; 
    while (k--){
        string s;
        cin >> s;
        for (char &c: s) c = tolower(c);
        int sz = s.size();
        bool found = false; 
        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                for (int i_2 = 0; i_2 < 8; i_2++){
                    for (int j_2 = 0; j_2 < sz; j_2++){
                        int nx = i + j_2 * dx[i_2];
                        int ny = j + j_2 * dy[i_2];
                        if (nx < 0 || ny < 0 || nx >= m || ny >= n) break; 
                        if (puzzle[nx][ny] != s[j_2]) break; 
                        if (!found && j_2 == sz - 1){
                            found = true; 
                            cout << i << " " << j << '\n';
                        }
                    }
                }
            }
        }
    }

}
