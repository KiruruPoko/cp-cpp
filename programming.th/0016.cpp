#include <bits/stdc++.h>
using namespace std;
const int MAX_QUESTION = 100;
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(0);
    int q;
    string answer;
    cin >> q;
    cin >> answer;
    string adrian = "ABC";
    string bruno = "BABC";
    string goran = "CCAABB";
    vector<int>score = {0, 0, 0}; // {adrian, bruno, goran}
    for (int i = 0; i < answer.size(); i++){
        if (answer[i] == adrian[i % adrian.size()]) score[0]++;
        if (answer[i] == bruno[i % bruno.size()]) score[1]++;
        if (answer[i] == goran[i % goran.size()]) score[2]++;
    }
    auto max_score = max_element(score.begin(), score.end());
    cout << *max_score << endl;
    if (score[0] == *max_score) cout << "Adrian" << endl;
    if (score[1] == *max_score) cout << "Bruno" << endl;
    if (score[2] == *max_score) cout << "Goran" << endl;
    return 0; 
}