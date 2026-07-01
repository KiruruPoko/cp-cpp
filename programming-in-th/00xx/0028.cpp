#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

struct team {
    string name; 
    int pts = 0; 
    int gf = 0;
    int gd = 0;
    int ga = 0;  

};

bool compare(const team& a, const team& b){
    if (a.pts != b.pts) return a.pts > b.pts;
    if (a.gd != b.gd) return a.gd > b.gd;
    return a.gf > b.gf;
}

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    vector<team> group(4);
    for (int i = 0; i < 4; i++) cin >> group[i].name;
    int score[4][4];
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            cin >> score[i][j];
            group[i].gf += score[i][j];
            group[j].ga += score[i][j];
        }
    }
    for (int i = 0; i < 4; i++){
        for (int j = i + 1; j < 4; j++){
            if (score[i][j] > score[j][i]) group[i].pts += 3; 
            else if (score[i][j] < score[j][i]) group[j].pts += 3; 
            else {
                group[i].pts += 1;
                group[j].pts += 1;
            }
        }
        group[i].gd = group[i].gf - group[i].ga;
    }
    sort(group.begin(), group.end(), compare);

    for (auto &a: group) cout << a.name << " " << a.pts << '\n';
    return 0; 
}