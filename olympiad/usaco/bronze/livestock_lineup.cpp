#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// #define st first; 
// #define nd second; 

int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int n;
    cin >> n;
    vector<string> name = {"Bessie", "Buttercup", "Belinda", "Beatrice", "Bella", "Blue", "Betsy", "Sue"};
    vector<pair<string, string>> bestie;
    for (int i = 0; i < n; i++) {
        string s;
        string first, last;

        for (int j = 0; j < 6; j++) {
            cin >> s;
            if (j == 0) first = s; // x must be milked besides y -> make_pair(x = s[0], y = s[5])
            if (j == 5) last = s;
        }

        bestie.emplace_back(first, last);
    }
    // for (auto &a: bestie) cout << a.first << " " << a.second << '\n'; // for debugging bestie
    sort (name.begin(), name.end());
    do {    
        vector<bool> cond((int)bestie.size(), false);
        for (int i = 0; i < n; i++){
            for (int j = 0; j < 8; j++){
                if (name[j] == bestie[i].first){
                    if (j > 0 && j < 7){
                        if (name[j - 1] == bestie[i].second || name[j + 1] == bestie[i].second) cond[i] = true;
                    }
                    else if (j == 7){
                        if (name[6] == bestie[i].second) cond[i] = true; 
                    }
                    else {
                        if (name[1] == bestie[i].second) cond[i] = true;
                    }
                }
            }
        }
        bool cond_met = true;
        for (int i = 0; i < (int)cond.size(); i++){
            if (!cond[i]) {
                cond_met = false; 
                break;
            }
        }
        if (cond_met){
            for (auto &a: name) cout << a << '\n';
            return 0; 
        }
    } while(next_permutation(name.begin(), name.end()));
}