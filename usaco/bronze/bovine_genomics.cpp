#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

bool is_spotty(const set<char>& s1, const set<char>& s2){
    if (s1.size() > s2.size()) return is_spotty(s2, s1);
    for (const auto &element: s1){
        if (s2.find(element) != s2.end()) return false;
    }
    return true;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    int cnt = 0;
    vector<string> gene(n * 2);
    for (int i = 0; i < (int)gene.size(); i++) cin >> gene[i];

    for (int j = 0; j < m; j++){
        set<char> s1;
        set<char> s2;
        for (int i = 0; i < n; i++){
            s1.insert(gene[i][j]);
        }
        for (int k = n; k < (int)gene.size(); k++){
            s2.insert(gene[k][j]);
        }
        if (is_spotty(s1, s2)) {
            cnt++;
        }
    }
    cout << cnt << '\n';
    return 0; 
}
