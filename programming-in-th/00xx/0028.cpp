#include <bits/stdc++.h>
using namespace std;
#define ll long long;

struct Team {
    string name;
    int points = 0;
    int gf = 0; 
    int ga = 0; 
    int gd = 0; 
};

bool compareTeams(const Team& a, const Team& b) {
    if (a.points != b.points) return a.points > b.points;
    if (a.gd != b.gd) return a.gd > b.gd;
    return a.gf > b.gf;
}

int main() {
    vector<Team> teams(4);
    for (int i = 0; i < 4; ++i) cin >> teams[i].name;

    int score[4][4];
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cin >> score[i][j];
            teams[i].gf += score[i][j];
            teams[j].ga += score[i][j];
        }
    }

    for (int i = 0; i < 4; ++i) {
        for (int j = i + 1; j < 4; ++j) {
            if (score[i][j] > score[j][i]) teams[i].points += 3;
            else if (score[i][j] < score[j][i]) teams[j].points += 3;
            else {
                teams[i].points += 1;
                teams[j].points += 1;
            }
        }
        teams[i].gd = teams[i].gf - teams[i].ga;
    }

    sort(teams.begin(), teams.end(), compareTeams);

    for (const auto& t : teams) {
        cout << t.name << " " << t.points << endl;
    }

    return 0;
}
